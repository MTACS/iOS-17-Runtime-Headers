
@protocol PXStoryStyle

@required

- (NSArray *)createRandomNumberGenerators;
- (<PXAudioCueSource> *)cueSource;
- (long long)customColorGradeKind;
- (bool)isCustomized;
- (NSString *)originalColorGradeCategory;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (<PXStorySongResource> *)songResource;
- (<PXStoryTimelineStyle> *)timelineStyleWithSpec:(id <PXStoryTimelineSpec>)arg1 resourcesDataSource:(PXStoryResourcesDataSource *)arg2 randomNumberGenerators:(NSArray *)arg3 errorReporter:(id <PXStoryErrorReporter>)arg4;

@end
