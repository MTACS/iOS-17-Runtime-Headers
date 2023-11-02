
@interface PXStoryConcreteTimelineStyle : NSObject <PXStoryTimelineStyle> {
    NSArray * _allowedClipCompositions;
    NSArray * _allowedKeyAssetClipCompositions;
    bool  _allowsDefaultKenBurns;
    bool  _allowsDefaultSeparatorEffects;
    bool  _allowsDefaultTransitions;
    bool  _allowsIncompleteTimelines;
    bool  _allowsRandomKenBurnsFallback;
    bool  _allowsRandomSeparatorEffectsFallback;
    bool  _allowsRandomTransitionFallback;
    <PXAudioAsset> * _audioAsset;
    PFStoryAutoEditConfiguration * _autoEditConfiguration;
    <PXStoryAutoEditDecisionList> * _autoEditDecisionList;
    <PXAudioCueSource> * _cueSource;
    PXStoryMultipartPanoramaParameters * _defaultHorizontalMultipartPanoramaParameters;
    PXStoryMultipartPanoramaParameters * _defaultVerticalMultipartPanoramaParameters;
    bool  _didInitializeDefaultMultipartPanoramaParameters;
    double  _effectiveMovementDurationFactor;
    <PXStoryErrorReporter> * _errorReporter;
    PXStoryRecipeClipMotionStyleProvider * _fallbackMotionStyleProvider;
    PXStoryRecipeClipTransitionProvider * _fallbackTransitionProvider;
    bool  _isRTL;
    unsigned long long  _keyAssetCroppingOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_clipByAssetUUID;
    unsigned long long  _otherAssetsCroppingOptions;
    struct { 
        long long kind; 
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
        } specificDurationInfo; 
    }  _overallDurationInfo;
    NSArray * _possibleFallbackTransitionKinds;
    <PFRandomNumberGenerator> * _randomNumberGenerator;
    double  _rotationSpeedFactor;
    double  _scaleSpeedFactor;
    long long  _songPace;
    <PXStoryTimelineSpec> * _spec;
    PXStoryConfiguration * _storyConfiguration;
    struct { 
        unsigned long long croppingOptions; 
        bool preferStillKeySegment; 
    }  _styleOptions;
}

@property (nonatomic, readonly) bool allowsIncompleteTimelines;
@property (nonatomic, readonly) bool allowsKenBurnsAnimations;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } defaultDisplayAssetPresentationDuration;
@property (nonatomic, readonly) PXStoryMultipartPanoramaParameters *defaultHorizontalMultipartPanoramaParameters;
@property (nonatomic, readonly) PXStoryMultipartPanoramaParameters *defaultVerticalMultipartPanoramaParameters;
@property (nonatomic, readonly) PXStoryConfiguration *storyConfiguration;

- (void).cxx_destruct;
- (id)_clipForDisplayAsset:(id)arg1;
- (id)_clipForDisplayAssets:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })_durationInfoForClip:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 croppingContext:(id)arg3;
- (void)_ensureDefaultMultipartPanoramaParameters;
- (void)_getOneUpKenBurnsParameters:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forDisplayAsset:(id)arg2 motionInfo:(const struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; }*)arg3 motionParameters:(const struct { double x1; double x2; double x3; double x4; }*)arg4 factory:(id)arg5;
- (struct { double x1; double x2; double x3; double x4; })_kenBurnsMotionParametersForDuration:(double)arg1;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })_transitionInfoForClip:(id)arg1 isKeyAsset:(bool)arg2;
- (id)allowedClipCompositionsWithStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 nextDisplayAssets:(id)arg2;
- (bool)allowsIncompleteTimelines;
- (bool)allowsKenBurnsAnimations;
- (bool)allowsMultipartPanoramaForDisplayAsset:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })audioInfoForDisplayAsset:(id)arg1;
- (id)clipCompositionForKeyAsset:(id)arg1 contentInfo:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg2 finalPlaybackStyle:(long long)arg3;
- (double)composabilityScoreForSegmentWithDisplayAssets:(id)arg1;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; })contentInfoForDisplayAsset:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultDisplayAssetPresentationDuration;
- (id)defaultHorizontalMultipartPanoramaParameters;
- (id)defaultVerticalMultipartPanoramaParameters;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })durationForVerticallyPanningPortraitAsset:(id)arg1 atSpeed:(double)arg2 motionInfo:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg3 minimumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 croppingContext:(id)arg5;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })durationInfoForSegmentWithDisplayAssets:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (double)effectiveMovementDurationForDurationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg1;
- (void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2 assetContentInfos:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg3 finalPlaybackStyles:(const long long*)arg4 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 durationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg6 separatorEffectParameters:(const struct { unsigned int x1; double x2; double x3; }*)arg7 separatorEffectContext:(long long)arg8 buffer:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg9 usingBlock:(id /* block */)arg10;
- (void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2 finalPlaybackStyles:(const long long*)arg3 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 durationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg5 buffer:(struct { unsigned int x1; double x2; double x3; }*)arg6 usingBlock:(id /* block */)arg7;
- (long long)finalNUpPlaybackStyleForOriginalPlaybackStyle:(long long)arg1;
- (long long)finalOneUpPlaybackStyleForDisplayAsset:(id)arg1 originalPlaybackStyle:(long long)arg2;
- (id)init;
- (id)initWithSpec:(id)arg1 audioAsset:(id)arg2 cueSource:(id)arg3 overallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg4 autoEditDecisionList:(id)arg5 autoEditConfiguration:(id)arg6 allowedKeyAssetClipCompositions:(id)arg7 allowedClipCompositions:(id)arg8 randomNumberGenerators:(id)arg9 errorReporter:(id)arg10 allowsIncompleteTimelines:(bool)arg11 styleOptions:(struct { unsigned long long x1; bool x2; })arg12 storyConfiguration:(id)arg13;
- (bool)isOriginalPlaybackStyleAllowedInNUp:(long long)arg1;
- (id)sortedCropContentsRectsForMultipartPanoramaWithDisplayAsset:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 proposedCropContentsRects:(id)arg3 axis:(long long)arg4 normalizedKenBurnsEffectParameters:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg5 durationInfos:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; }*)arg6 transitionInfos:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; }*)arg7;
- (id)storyConfiguration;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })transitionInfoForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2;

@end
