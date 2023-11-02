
@interface PISegmentationGatingRange : NSObject {
    double  _depthMax;
    double  _depthMin;
    double  _manualMax;
    double  _manualMin;
    double  _max;
    double  _min;
}

@property (nonatomic, readonly) double depthMax;
@property (nonatomic, readonly) double depthMin;
@property (nonatomic, readonly) double manualMax;
@property (nonatomic, readonly) double manualMin;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;

- (double)depthMax;
- (double)depthMin;
- (id)description;
- (id)initWithMin:(double)arg1 max:(double)arg2 manualMin:(double)arg3 manualMax:(double)arg4 depthMin:(double)arg5 depthMax:(double)arg6;
- (double)manualMax;
- (double)manualMin;
- (double)max;
- (double)min;
- (id)withLenience:(double)arg1;

@end
