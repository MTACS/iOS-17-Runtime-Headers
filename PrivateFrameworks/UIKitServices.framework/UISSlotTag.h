
@interface UISSlotTag : NSObject <NSCopying>

@property (getter=isValid, nonatomic, readonly) bool valid;

+ (unsigned long long)cacheLimit;

- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (float)backgroundStatisticsFailingContrastForStyle:(id)arg1;
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;
- (float)backgroundStatisticsPassingContrastForStyle:(id)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })backgroundStatisticsRegionForStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)failGradeForStyle:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hitTestInformationMaskForStyle:(id)arg1;
- (long long)initialSampleEventForStyle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureNameForStyle:(id)arg1;

@end
