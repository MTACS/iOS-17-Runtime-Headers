
@interface _UIShadowView : UIImageView {
    bool  _useLowerIntensity;
}

@property (nonatomic) bool useLowerIntensity;

- (void)_updateShadowVisualStyling;
- (void)didMoveToSuperview;
- (void)setUseLowerIntensity:(bool)arg1;
- (bool)useLowerIntensity;

@end
