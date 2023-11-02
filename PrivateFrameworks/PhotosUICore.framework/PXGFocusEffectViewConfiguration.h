
@interface PXGFocusEffectViewConfiguration : PXGFocusableViewConfiguration {
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentMotionRotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentMotionTranslation;
    double  _cornerRadius;
    double  _focusedSizeIncrease;
    double  _shadowOpacity;
    double  _shadowVerticalOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentMotionRotation;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentMotionTranslation;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowVerticalOffset;

- (struct CGPoint { double x1; double x2; })contentMotionRotation;
- (struct CGPoint { double x1; double x2; })contentMotionTranslation;
- (double)cornerRadius;
- (double)focusedSizeIncrease;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setContentMotionRotation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentMotionTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFocusedSizeIncrease:(double)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowVerticalOffset:(double)arg1;
- (double)shadowOpacity;
- (double)shadowVerticalOffset;

@end
