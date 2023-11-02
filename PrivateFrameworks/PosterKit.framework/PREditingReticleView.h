
@interface PREditingReticleView : UIView {
    bool  _active;
    UIView * _emptyView;
    UIView * _outlineBorderView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIView *emptyView;
@property (nonatomic, readonly) UIView *outlineBorderView;

+ (double)borderColor;
+ (double)maxBorderColor;
+ (double)minBorderColor;
+ (id)reticleVibrancyForVibrancyConfiguration:(id)arg1;
+ (double)vibrancyStrength;

- (void).cxx_destruct;
- (void)_startActiveAnimation;
- (void)_stopActiveAnimation;
- (id)emptyView;
- (id)init;
- (bool)isActive;
- (id)outlineBorderView;
- (void)setActive:(bool)arg1;
- (void)setEmptyView:(id)arg1;

@end
