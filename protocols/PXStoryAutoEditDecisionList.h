
@protocol PXStoryAutoEditDecisionList <PXStoryAutoEditClipCatalog>

@required

- (bool)allowsNUp;
- (NSString *)colorGradeCategory;
- (NSString *)decisionPapertrail;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultDisplayAssetPresentationDuration;
- (NSString *)diagnosticDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })overallDurationInfo;
- (<PXAudioAsset> *)song;

@end
