
@interface PGCommonTitleUtility : NSObject

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 searchForward:(bool)arg3;
+ (id)addressNodesFromMomentNodes:(id)arg1;
+ (id)bestAddressNodeForMomentNodes:(id)arg1;
+ (bool)containsCelebrationForDateNodes:(id)arg1 holidayName:(id*)arg2 titleGenerationContext:(id)arg3 graph:(id)arg4;
+ (id)dateNodesFromMomentNodes:(id)arg1;
+ (unsigned long long)dimensionForLabel:(id)arg1;
+ (id)holidayNameForDateNodes:(id)arg1;
+ (bool)isLargeCountryForAddressNode:(id)arg1 locationHelper:(id)arg2;
+ (id)locationLabelForDimension:(unsigned long long)arg1;
+ (void)startAndEndDateNodeFromDateNodes:(id)arg1 startDateNode:(id*)arg2 endDateNode:(id*)arg3;
+ (id)titleWithLineBreakForTitle:(id)arg1;
+ (id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2;
+ (id)titleWithNoLineBreakSpaceForTitle:(id)arg1 andUsedNames:(id)arg2;

@end
