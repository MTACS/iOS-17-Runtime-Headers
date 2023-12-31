
@interface _UIVisualEffectTintLayerConfig : _UIVisualEffectLayerConfig {
    UIColor * _tintColor;
}

@property (nonatomic, readonly) UIColor *tintColor;

+ (id)layerWithTintColor:(id)arg1;
+ (id)layerWithTintColor:(id)arg1 filterType:(id)arg2;

- (void).cxx_destruct;
- (void)configureLayerView:(id)arg1;
- (void)deconfigureLayerView:(id)arg1;
- (id)description;
- (id)tintColor;

@end
