
@interface PXStoryDummyStyle : NSObject <PXStoryMutableDummyStyle, PXStoryStyle> {
    NSArray * _allowedClipCompositionsInLandscape;
    NSArray * _allowedClipCompositionsInPortrait;
    long long  _cropMode;
    long long  _cropVerticalContentMode;
    <PXAudioCueSource> * _cueSource;
    long long  _customColorGradeKind;
    double  _defaultSegmentDuration;
    bool  _isCustomized;
    double  _kenBurnsDistance;
    unsigned int  _kenBurnsPanDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _kenBurnsRelativeTransformOrigin;
    double  _kenBurnsRotationInDegrees;
    double  _kenBurnsScale;
    long long  _oneUpKenBurnsKind;
    NSString * _originalColorGradeCategory;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _outroDuration;
    double  _separatorPanDistance;
    double  _separatorRotationAngle;
    <PXStorySongResource> * _songResource;
    long long  _threeUpKenBurnsKind;
    long long  _threeUpSeparatorEffectKind;
    struct { 
        BOOL orderOutTransition; 
        unsigned char options; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
        BOOL fallbackFromTransitionKind; 
        union { 
            BOOL panDirection; 
            BOOL scaleDirection; 
            BOOL rotateDirection; 
            BOOL wipeKind; 
        } ; 
        union { 
            double scaleRelativeFactor; 
            double rotateAngleInDegrees; 
            BOOL wipeFirstAssetDirection; 
        } ; 
    }  _transitionInfo;
    long long  _twoUpKenBurnsKind;
    long long  _twoUpSeparatorEffectKind;
}

@property (nonatomic, copy) NSArray *allowedClipCompositionsInLandscape;
@property (nonatomic, copy) NSArray *allowedClipCompositionsInPortrait;
@property (nonatomic) long long cropMode;
@property (nonatomic) long long cropVerticalContentMode;
@property (nonatomic, readonly) <PXAudioCueSource> *cueSource;
@property (nonatomic, readonly) long long customColorGradeKind;
@property (nonatomic) double defaultSegmentDuration;
@property (nonatomic, readonly) bool isCustomized;
@property (nonatomic) double kenBurnsDistance;
@property (nonatomic) unsigned int kenBurnsPanDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } kenBurnsRelativeTransformOrigin;
@property (nonatomic) double kenBurnsRotationInDegrees;
@property (nonatomic) double kenBurnsScale;
@property (nonatomic) long long oneUpKenBurnsKind;
@property (nonatomic, readonly) NSString *originalColorGradeCategory;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } outroDuration;
@property (nonatomic) double separatorPanDistance;
@property (nonatomic) double separatorRotationAngle;
@property (nonatomic, readonly) <PXStorySongResource> *songResource;
@property (nonatomic) long long threeUpKenBurnsKind;
@property (nonatomic) long long threeUpSeparatorEffectKind;
@property (nonatomic) struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; } transitionInfo;
@property (nonatomic) long long twoUpKenBurnsKind;
@property (nonatomic) long long twoUpSeparatorEffectKind;

- (void).cxx_destruct;
- (id)allowedClipCompositionsInLandscape;
- (id)allowedClipCompositionsInPortrait;
- (id)createRandomNumberGenerators;
- (long long)cropMode;
- (long long)cropVerticalContentMode;
- (id)cueSource;
- (long long)customColorGradeKind;
- (double)defaultSegmentDuration;
- (id)init;
- (id)initWithConfiguration:(id /* block */)arg1;
- (bool)isCustomized;
- (double)kenBurnsDistance;
- (unsigned int)kenBurnsPanDirection;
- (struct CGPoint { double x1; double x2; })kenBurnsRelativeTransformOrigin;
- (double)kenBurnsRotationInDegrees;
- (double)kenBurnsScale;
- (long long)oneUpKenBurnsKind;
- (id)originalColorGradeCategory;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (double)separatorPanDistance;
- (double)separatorRotationAngle;
- (void)setAllowedClipCompositionsInLandscape:(id)arg1;
- (void)setAllowedClipCompositionsInPortrait:(id)arg1;
- (void)setCropMode:(long long)arg1;
- (void)setCropVerticalContentMode:(long long)arg1;
- (void)setDefaultSegmentDuration:(double)arg1;
- (void)setKenBurnsDistance:(double)arg1;
- (void)setKenBurnsPanDirection:(unsigned int)arg1;
- (void)setKenBurnsRelativeTransformOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKenBurnsRotationInDegrees:(double)arg1;
- (void)setKenBurnsScale:(double)arg1;
- (void)setOneUpKenBurnsKind:(long long)arg1;
- (void)setOutroDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeparatorPanDistance:(double)arg1;
- (void)setSeparatorRotationAngle:(double)arg1;
- (void)setThreeUpKenBurnsKind:(long long)arg1;
- (void)setThreeUpSeparatorEffectKind:(long long)arg1;
- (void)setTransitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg1;
- (void)setTwoUpKenBurnsKind:(long long)arg1;
- (void)setTwoUpSeparatorEffectKind:(long long)arg1;
- (id)songResource;
- (long long)threeUpKenBurnsKind;
- (long long)threeUpSeparatorEffectKind;
- (id)timelineStyleWithSpec:(id)arg1 resourcesDataSource:(id)arg2 randomNumberGenerators:(id)arg3 errorReporter:(id)arg4;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })transitionInfo;
- (long long)twoUpKenBurnsKind;
- (long long)twoUpSeparatorEffectKind;

@end
