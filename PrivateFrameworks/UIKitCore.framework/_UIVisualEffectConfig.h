
@interface _UIVisualEffectConfig : NSObject {
    _UIVisualEffectLayerConfig * _contentConfig;
    NSMutableArray * _layerConfigs;
}

@property (nonatomic, readonly) _UIVisualEffectLayerConfig *contentConfig;
@property (nonatomic, readonly) NSArray *layerConfigs;

+ (id)configWithContentConfig:(id)arg1;
+ (id)configWithLayerConfigs:(id)arg1;

- (void).cxx_destruct;
- (void)addLayerConfig:(id)arg1;
- (id)contentConfig;
- (id)description;
- (void)enumerateLayerConfigs:(id /* block */)arg1;
- (id)layerConfigs;

@end
