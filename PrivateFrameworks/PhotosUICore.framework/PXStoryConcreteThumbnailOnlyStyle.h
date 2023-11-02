
@interface PXStoryConcreteThumbnailOnlyStyle : NSObject <PXStoryStyle, PXStoryTimelineStyle> {
    NSArray * _allowedClipCompositions;
    long long  _customColorGradeKind;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _defaultDisplayAssetPresentationDuration;
    NSString * _originalColorGradeCategory;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _outroDuration;
}

@property (nonatomic, readonly) bool allowsIncompleteTimelines;
@property (nonatomic, readonly) <PXAudioCueSource> *cueSource;
@property (nonatomic, readonly) long long customColorGradeKind;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } defaultDisplayAssetPresentationDuration;
@property (nonatomic, readonly) PXStoryMultipartPanoramaParameters *defaultHorizontalMultipartPanoramaParameters;
@property (nonatomic, readonly) PXStoryMultipartPanoramaParameters *defaultVerticalMultipartPanoramaParameters;
@property (nonatomic, readonly) bool isCustomized;
@property (nonatomic, readonly) NSString *originalColorGradeCategory;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } outroDuration;
@property (nonatomic, readonly) <PXStorySongResource> *songResource;

- (void).cxx_destruct;
- (id)allowedClipCompositionsWithStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 nextDisplayAssets:(id)arg2;
- (bool)allowsIncompleteTimelines;
- (bool)allowsMultipartPanoramaForDisplayAsset:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })audioInfoForDisplayAsset:(id)arg1;
- (id)clipCompositionForKeyAsset:(id)arg1 contentInfo:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg2 finalPlaybackStyle:(long long)arg3;
- (double)composabilityScoreForSegmentWithDisplayAssets:(id)arg1;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; })contentInfoForDisplayAsset:(id)arg1;
- (id)createRandomNumberGenerators;
- (id)cueSource;
- (long long)customColorGradeKind;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultDisplayAssetPresentationDuration;
- (id)defaultHorizontalMultipartPanoramaParameters;
- (id)defaultVerticalMultipartPanoramaParameters;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })durationInfoForSegmentWithDisplayAssets:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2 assetContentInfos:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg3 finalPlaybackStyles:(const long long*)arg4 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 durationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg6 separatorEffectParameters:(const struct { unsigned int x1; double x2; double x3; }*)arg7 separatorEffectContext:(long long)arg8 buffer:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg9 usingBlock:(id /* block */)arg10;
- (void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2 finalPlaybackStyles:(const long long*)arg3 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 durationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg5 buffer:(struct { unsigned int x1; double x2; double x3; }*)arg6 usingBlock:(id /* block */)arg7;
- (long long)finalNUpPlaybackStyleForOriginalPlaybackStyle:(long long)arg1;
- (long long)finalOneUpPlaybackStyleForDisplayAsset:(id)arg1 originalPlaybackStyle:(long long)arg2;
- (id)init;
- (id)initWithCustomColorGradeKind:(long long)arg1 originalColorGradeCategory:(id)arg2;
- (bool)isCustomized;
- (bool)isOriginalPlaybackStyleAllowedInNUp:(long long)arg1;
- (id)originalColorGradeCategory;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (id)songResource;
- (id)sortedCropContentsRectsForMultipartPanoramaWithDisplayAsset:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 proposedCropContentsRects:(id)arg3 axis:(long long)arg4 normalizedKenBurnsEffectParameters:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg5 durationInfos:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; }*)arg6 transitionInfos:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; }*)arg7;
- (id)timelineStyleWithSpec:(id)arg1 resourcesDataSource:(id)arg2 randomNumberGenerators:(id)arg3 errorReporter:(id)arg4;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })transitionInfoForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2;

@end
