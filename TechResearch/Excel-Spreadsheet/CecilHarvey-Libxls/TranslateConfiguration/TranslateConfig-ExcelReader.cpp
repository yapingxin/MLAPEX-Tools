// TranslateConfig-ExcelReader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "libxls/xls.h"

using namespace xls;


int main()
{
	xlsWorkBook* pWB;
	xlsWorkSheet* pWS;
	FILE *f;
	unsigned int i;

	int sheet_count = 0;

	struct st_row_data* row;
	WORD t, tt;
	pWB = xls_open("C:\\SVN\\CH5ODT4YZWKF2\\MLAPEX\\trunk\\Dev_MLAPEX\\Pretreatment\\Messages\\Messages.xls", "UTF-16");

	if (pWB != NULL)
	{
		sheet_count = pWB->sheets.count;
		if (sheet_count > 0)
		{
			pWS = xls_getWorkSheet(pWB, 0);
			xls_parseWorkSheet(pWS);
		}
	}

    return 0;
}

