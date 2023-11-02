
@interface SBHPageManagementIconViewScalingAttributes : NSObject {
    bool  _allowsEdgeAntialiasing;
    NSString * _minificationFilter;
    double  _rasterizationScale;
    bool  _shouldRasterize;
}

@property (nonatomic, readonly) bool allowsEdgeAntialiasing;
@property (nonatomic, readonly, copy) NSString *minificationFilter;
@property (nonatomic, readonly) double rasterizationScale;
@property (nonatomic, readonly) bool shouldRasterize;

- (void).cxx_destruct;
- (bool)allowsEdgeAntialiasing;
- (id)initWithMinificationFilter:(id)arg1 shouldRasterize:(bool)arg2 rasterizationScale:(double)arg3 allowsEdgeAntialiasing:(bool)arg4;
- (id)minificationFilter;
- (double)rasterizationScale;
- (bool)shouldRasterize;

@end
