
@interface _UIVisualEffectEnvironment : NSObject <NSCopying> {
    bool  _allowsBlurring;
    bool  _allowsDithering;
    UIVisualEffectView * _effectView;
    bool  _reducedTransperancy;
    UITraitCollection * _traitCollection;
    bool  _useSimpleVibrancy;
}

@property (nonatomic) bool allowsBlurring;
@property (nonatomic) bool allowsDithering;
@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (nonatomic) bool reducedTransperancy;
@property (nonatomic, copy) UITraitCollection *traitCollection;
@property (nonatomic) bool useSimpleVibrancy;

- (void).cxx_destruct;
- (bool)allowsBlurring;
- (bool)allowsDithering;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectView;
- (id)initWithHost:(id)arg1;
- (bool)reducedTransperancy;
- (void)setAllowsBlurring:(bool)arg1;
- (void)setAllowsDithering:(bool)arg1;
- (void)setReducedTransperancy:(bool)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setUseSimpleVibrancy:(bool)arg1;
- (id)traitCollection;
- (bool)useSimpleVibrancy;

@end
