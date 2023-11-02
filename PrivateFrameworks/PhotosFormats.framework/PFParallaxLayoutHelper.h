
@interface PFParallaxLayoutHelper : NSObject {
    unsigned long long  _classification;
    bool  _headroomFeasible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialRect;
    PFParallaxLayoutConfiguration * _layoutConfiguration;
    unsigned long long  _layoutType;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pixelEffectiveAcceptable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pixelEffectivePreferred;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pixelValidBounds;
}

@property (nonatomic, readonly) bool canInflate;
@property (nonatomic, readonly) unsigned long long classification;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } extendedImageSize;
@property (nonatomic, readonly) bool headroomFeasible;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialRect;
@property (nonatomic, readonly) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (nonatomic, readonly) unsigned long long layoutType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } originalImageSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pixelEffectiveAcceptable;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pixelEffectivePreferred;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pixelValidBounds;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inflatePersonFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)scoreBonusInactiveWithLayoutType:(unsigned long long)arg1;
+ (double)scoreBonusOverlapAvoid;
+ (double)scoreBonusOverlapTargetWithLayoutType:(unsigned long long)arg1;
+ (double)scoreBonusZoomHeadroomWithLayoutType:(unsigned long long)arg1;
+ (double)scoreBonusZoomNoneWithLayoutType:(unsigned long long)arg1;
+ (double)scoreBonusZoomTargetWithLayoutType:(unsigned long long)arg1;
+ (void)setScoreBonusInactive:(double)arg1;
+ (void)setScoreBonusOverlapAvoid:(double)arg1;
+ (void)setScoreBonusOverlapTarget:(double)arg1;
+ (void)setScoreBonusZoomHeadroom:(double)arg1;
+ (void)setScoreBonusZoomTarget:(double)arg1;
+ (void)setTargetZoomFactorLimit:(double)arg1;
+ (void)setTargetZoomPercent:(double)arg1;
+ (double)targetZoomFactorLimitWithLayoutType:(unsigned long long)arg1;
+ (double)targetZoomPercentWithLayoutType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)bestLayout:(id)arg1;
- (bool)canInflate;
- (unsigned long long)classification;
- (double)computeCropScoreForIntermediate:(id)arg1;
- (struct CGSize { double x1; double x2; })extendedImageSize;
- (bool)headroomFeasible;
- (struct CGSize { double x1; double x2; })imageSizeWithHeadroomStrategy:(unsigned long long)arg1;
- (id)initWithPosterClassification:(unsigned long long)arg1 initialRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 effectivePreferredRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 validBoundsNormalized:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 headroomFeasible:(bool)arg7 layoutType:(unsigned long long)arg8 layoutConfiguration:(id)arg9;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialRect;
- (id)intermediateWithHeadroomStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)intermediateWithInactiveStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)intermediateWithOverlapStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)intermediateWithParallaxStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)intermediateWithZoomStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)layoutConfiguration;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })originalImageSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pixelEffectiveAcceptable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pixelEffectivePreferred;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pixelValidBounds;
- (double)scoreAdjustmentWithUnscoredIntermediate:(id)arg1 unsafeAreaOverlap:(double)arg2 timeBottomOverlap:(double)arg3 timeTopOverlap:(double)arg4;
- (id)scoreIntermediate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unsafeAreaInImageSpaceWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
