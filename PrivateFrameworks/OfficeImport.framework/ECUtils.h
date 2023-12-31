
@interface ECUtils : NSObject

+ (id)dateFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2;
+ (double)dateTimeNumberFromNSDate:(id)arg1 edWorkbook:(id)arg2;
+ (unsigned int)dateTimeOffsetForBuggy1900Dates:(double)arg1 edWorkbook:(id)arg2;
+ (bool)isRenameFunction:(id)arg1;
+ (bool)isValidDateTime:(double)arg1 edWorkbook:(id)arg2;
+ (id)lassoDefaultTableName;
+ (id)lassoStyleTableReferenceFromTableId:(id)arg1;
+ (id)renameFunction:(id)arg1;
+ (id)renameMap;
+ (double)timeIntervalFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2;
+ (bool)validDateInExcel:(id)arg1 edWorkbook:(id)arg2;

@end
