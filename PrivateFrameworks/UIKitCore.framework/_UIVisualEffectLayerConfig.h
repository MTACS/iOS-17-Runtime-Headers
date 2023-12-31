
@interface _UIVisualEffectLayerConfig : NSObject {
    UIColor * _fillColor;
    NSString * _filterType;
    double  _opacity;
}

@property (nonatomic, readonly) UIColor *fillColor;
@property (nonatomic, readonly) NSString *filterType;
@property (nonatomic, readonly) double opacity;

+ (id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3;

- (void).cxx_destruct;
- (void)configureLayerView:(id)arg1;
- (void)deconfigureLayerView:(id)arg1;
- (id)description;
- (id)fillColor;
- (id)filterType;
- (double)opacity;

@end
