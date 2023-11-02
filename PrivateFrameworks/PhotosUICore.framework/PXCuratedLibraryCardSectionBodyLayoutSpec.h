
@interface PXCuratedLibraryCardSectionBodyLayoutSpec : PXFeatureSpec {
    bool  _allowsVideoPlaybackAtAnySize;
    double  _aspectRatio;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _cornerRadius;
    double  _distanceToNextLayout;
    double  _horizontalMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    PXGGradient * _skimmingHintGradient;
}

@property (nonatomic, readonly) bool allowsVideoPlaybackAtAnySize;
@property (nonatomic) double aspectRatio;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } cornerRadius;
@property (nonatomic) double distanceToNextLayout;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) PXGGradient *skimmingHintGradient;

- (void).cxx_destruct;
- (bool)allowsVideoPlaybackAtAnySize;
- (double)aspectRatio;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })cornerRadius;
- (double)distanceToNextLayout;
- (double)horizontalMargin;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setAspectRatio:(double)arg1;
- (void)setCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setDistanceToNextLayout:(double)arg1;
- (void)setHorizontalMargin:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)skimmingHintGradient;

@end
