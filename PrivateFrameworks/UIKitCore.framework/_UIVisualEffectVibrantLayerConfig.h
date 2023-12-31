
@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig {
    NSDictionary * _filterAttributes;
    UIColor * _tintColor;
    UIColor * _vibrantColor;
}

@property (nonatomic, readonly, copy) NSDictionary *filterAttributes;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UIColor *vibrantColor;

+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3;
+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4;

- (void).cxx_destruct;
- (void)configureLayerView:(id)arg1;
- (void)deconfigureLayerView:(id)arg1;
- (id)description;
- (id)filterAttributes;
- (id)tintColor;
- (id)vibrantColor;

@end
