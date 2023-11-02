
@interface CRDataDetectorUtilities : NSObject

+ (unsigned long long)_dataCountOfType:(unsigned long long)arg1 inRegions:(id)arg2;
+ (unsigned long long)_groupTypeFromChildren:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_mappedUrlificationRangeFor:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withMapping:(id)arg2;
+ (id)_personNameFromFullNameString:(id)arg1;
+ (id)_personNameLineInRegion:(id)arg1;
+ (id)_personNameLineInRegion:(id)arg1 defaultLocale:(id)arg2;
+ (double)_personNameScoreForFullNameString:(id)arg1 locale:(id)arg2;
+ (double)_personNameScoreForString:(id)arg1 locale:(id)arg2;
+ (id)_regionsForTranscript:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 mapping:(id)arg3;
+ (bool)_shouldGroupAllEntitiesFor:(id)arg1 lines:(id)arg2;
+ (id)_stringByRemovingNamePrefixes:(id)arg1;
+ (id)computeDataDetectorRegionsForText:(id)arg1 locale:(id)arg2 transcriptComponents:(id)arg3;
+ (id)computeGroupRegionsWithDataDetectorRegions:(id)arg1 inRegion:(id)arg2;
+ (void)debugDataDetectorForRegion:(id)arg1 withImage:(id)arg2;

@end
