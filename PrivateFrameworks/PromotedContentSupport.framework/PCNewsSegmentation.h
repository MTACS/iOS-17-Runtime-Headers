
@interface PCNewsSegmentation : NSObject

+ (id)_classProperties;
+ (void)_updateGenderAndAgeGroupValues;
+ (void)addClientToSegments:(id)arg1 replaceExisting:(bool)arg2 privateSegment:(bool)arg3;
+ (id)ageGroup;
+ (id)gender;
+ (id)segmentData;

@end
