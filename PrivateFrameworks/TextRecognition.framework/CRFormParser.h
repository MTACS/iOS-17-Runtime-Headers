
@interface CRFormParser : NSObject

+ (id)_groupSegmentedFieldsInAlignedFields:(id)arg1;
+ (id)_groupSegmentedFieldsInFields:(id)arg1;
+ (bool)_isRegion:(id)arg1 segmentedBoxLeftOfRegion:(id)arg2 withTolerance:(double)arg3 modalWidth:(double)arg4 modelGap:(double)arg5;
+ (id)_keywordMapForPriorityKeywords:(bool)arg1;
+ (id)_labelRegionForField:(id)arg1 inRegions:(id)arg2;
+ (struct vector<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>, std::allocator<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>>> { void *x1; void *x2; struct __compressed_pair<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *> *, std::allocator<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>>> { void *x_3_1_1; } x3; })_labelRegionsForField:(id)arg1 inRegions:(id)arg2;
+ (unsigned long long)_nonStructuralContentTypeFromType:(unsigned long long)arg1;
+ (id)_orderedGroupsWithFields:(id)arg1 lines:(id)arg2;
+ (void)_parseFields:(id)arg1 regions:(id)arg2 shouldUpdateExternalFields:(bool)arg3 localeCounts:(id)arg4;
+ (id)_parseLabelForField:(id)arg1 regions:(id)arg2 associatedLabels:(id)arg3 labelRegions:(void*)arg4;
+ (unsigned long long)_predictAndAssignContentTypeForField:(id)arg1 labelRegion:(id)arg2 labelRegions:(const void*)arg3 regions:(id)arg4 shouldUpdateExternalFields:(bool)arg5 localeCounts:(id)arg6;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfFirstSegmentedFieldGroupInFields:(id)arg1 startIndex:(long long)arg2 modalWidth:(double)arg3 modelGap:(double)arg4;
+ (bool)_shouldPredictContentTypeForLabel:(id)arg1 locale:(id)arg2;
+ (id)_subarrayOfContextTypes:(id)arg1 beginIndex:(long long)arg2 count:(long long)arg3;
+ (id)_useKeywordTypes;
+ (id)convertDetectedFields:(id)arg1;
+ (double)globalLineHeightInDocument:(id)arg1;
+ (id)horizontalClustersFromFields:(id)arg1;
+ (id)lookupLanguagesForLanguage:(id)arg1;
+ (id)parseFieldsInDocument:(id)arg1 allFields:(id)arg2 shouldUpdateExternalFields:(bool)arg3;
+ (unsigned long long)predictContentTypeForField:(id)arg1 labelRegions:(const void*)arg2 locale:(id)arg3 keyword:(id*)arg4 matchedResult:(unsigned long long*)arg5;
+ (unsigned long long)predictContentTypeWithKeywordMatching:(id)arg1 locale:(id)arg2 keyword:(id*)arg3 withPriorityKeywords:(bool)arg4;
+ (id)predictLineHeightForFields:(id)arg1 inDocument:(id)arg2 shouldUpdateExternalFields:(bool)arg3;
+ (id)supportedLanguages;

@end
