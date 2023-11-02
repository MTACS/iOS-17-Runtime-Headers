
@interface PXStoryConcreteSubtimelineScanner : NSObject {
    PXStoryMutableConcreteTimeline * _bestSubtimeline;
    PXStoryMutableConcreteTimeline * _candidateSubtimeline;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } viewportSize; 
        double dividerWidth; 
        double singleAssetAspectRatio; 
    }  _clipCompositionContext;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } minimumDuration; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } preferredDuration; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } maximumDuration; 
        struct { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } time; 
            long long rank; 
        } preferredCue; 
        BOOL expectedTransitionKind; 
    }  _defaultDurationInfo;
    PXStoryMultipartPanoramaParameters * _defaultHorizontalMultipartPanoramaParameters;
    PXStoryMultipartPanoramaParameters * _defaultVerticalMultipartPanoramaParameters;
    PXStoryMutableConcreteTimeline * _emptySubtimeline;
    bool  _firstDisplayAssetIsSameAsKey;
    long long  _initialResourceIndex;
    double  _maximumAspectRatioForVerticalMultipartPanorama;
    long long  _maximumNumberOfTitleTextResourceIndexes;
    double  _minimumAspectRatioForHorizontalMultipartPanorama;
    long long * _nUpPlaybackStyleMapping;
    long long  _nextResourceIndex;
    struct { 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } s; 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } t; 
    }  _noKenBurnsEffectParameters;
    long long  _numberOfResources;
    NSIndexSet * _originalPlaybackStylesAllowedInNUp;
    PXStoryMutableConcreteTimeline * _precedingSubtimeline;
    PXStoryMutableConcreteTimeline * _precedingSubtimelineWithCandidateAndSubsequentSubtimelines;
    PXStoryMutableConcreteTimeline * _precedingSubtimelineWithCandidateSubtimeline;
    unsigned long long  _productionOptions;
    NSArray * _randomNumberGenerators;
    PXStoryResourcesDataSource * _resourcesDataSource;
    NSMutableArray * _reusableDisplayAssetInfos;
    <PXStoryTimelineSpec> * _spec;
    PXStoryMutableConcreteTimeline * _subtimelineWithClipComposition;
    PXStoryMutableConcreteTimeline * _subtimelineWithRemainingClips;
    <PXStoryTimelineScorer> * _timelineScorer;
    <PXStoryTimelineStyle> * _timelineStyle;
    long long * _titleTextResourceIndexes;
}

@property (nonatomic, readonly) bool isAtBeginning;
@property (nonatomic, readonly) bool isAtEnd;
@property (nonatomic, readonly) long long numberOfRemainingResources;
@property (nonatomic, readonly) NSArray *randomNumberGenerators;
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;
@property (nonatomic) struct { long long x1; unsigned long long x2[5]; } scanState;
@property (nonatomic, readonly) <PXStoryTimelineSpec> *spec;
@property (nonatomic, readonly) <PXStoryTimelineScorer> *timelineScorer;
@property (nonatomic, readonly) <PXStoryTimelineStyle> *timelineStyle;

- (void).cxx_destruct;
- (void)_addTitlesToTimeline:(id)arg1;
- (void)_initializeDefaultMultipartPanoramaParameters;
- (id)_newDisplayAssetsInfo;
- (id)_nextDisplayAssetsInfoWithMaximumCount:(long long)arg1;
- (void)_recycleDisplayAssetsInfo:(id)arg1;
- (bool)_scanFastestSubtimelineWithNextDisplayAssetResultHandler:(id /* block */)arg1;
- (bool)_scanMultipartPanoramaSubtimelineAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 axis:(long long)arg2 nextDisplayAssetsInfo:(id)arg3 resultHandler:(id /* block */)arg4;
- (bool)_scanMultipartPanoramaSubtimelineAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 nextDisplayAssetsInfo:(id)arg2 resultHandler:(id /* block */)arg3;
- (bool)_scanSubtimelineWithClipComposition:(id)arg1 displayAssets:(id)arg2 assetContentInfos:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg3 playbackStyles:(const long long*)arg4 separatorEffectParameters:(const struct { unsigned int x1; double x2; double x3; }*)arg5 kenBurnsEffectParameters:(const struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg6 transitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg7 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 durationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg9 resultHandler:(id /* block */)arg10;
- (void)dealloc;
- (void)enumeratePossibleNextSubtimelinesAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isAtBeginning;
- (bool)isAtEnd;
- (long long)numberOfRemainingResources;
- (id)randomNumberGenerators;
- (id)resourcesDataSource;
- (bool)scanBestSubtimelineFollowingTimeline:(id)arg1 resultHandler:(id /* block */)arg2;
- (bool)scanFastestSubtimelineWithDisplayAssetResourceCount:(long long)arg1 resultHandler:(id /* block */)arg2;
- (bool)scanFastestSubtimelineWithRemainingClipsResultHandler:(id /* block */)arg1;
- (struct { long long x1; unsigned long long x2[5]; })scanState;
- (bool)scanSubtimelineWithClipComposition:(id)arg1 displayAssets:(id)arg2 assetContentInfos:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg3 playbackStyles:(const long long*)arg4 separatorEffectParameters:(const struct { unsigned int x1; double x2; double x3; }*)arg5 kenBurnsEffectParameters:(const struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg6 transitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg7 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 durationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg9 resultHandler:(id /* block */)arg10;
- (void)setScanState:(struct { long long x1; unsigned long long x2[5]; })arg1;
- (id)spec;
- (id)timelineScorer;
- (id)timelineStyle;

@end
