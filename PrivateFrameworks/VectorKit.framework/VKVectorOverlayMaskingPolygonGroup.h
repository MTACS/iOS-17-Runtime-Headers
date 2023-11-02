
@interface VKVectorOverlayMaskingPolygonGroup : VKVectorOverlayData {
    long long  _fillMode;
    NSArray * _polygons;
    long long  _style;
}

@property (nonatomic) long long fillMode;
@property (nonatomic, readonly) NSArray *polygons;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (long long)fillMode;
- (id)initWithPolygons:(id)arg1;
- (id)polygons;
- (void)setFillMode:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
