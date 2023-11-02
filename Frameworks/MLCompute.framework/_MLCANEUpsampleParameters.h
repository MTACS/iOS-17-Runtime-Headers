
@interface _MLCANEUpsampleParameters : NSObject {
    float  _scaleFactorX;
    float  _scaleFactorY;
    NSDictionary * _upsampleParams;
}

@property (nonatomic, readonly) float scaleFactorX;
@property (nonatomic, readonly) float scaleFactorY;
@property (nonatomic, readonly, retain) NSDictionary *upsampleParams;

+ (id)upsampleUnitParametersWith:(id)arg1 scaleFactorX:(float)arg2 scaleFactorY:(float)arg3;

- (void).cxx_destruct;
- (id)initWithUpsampleParams:(id)arg1 scaleFactorX:(float)arg2 scaleFactorY:(float)arg3;
- (float)scaleFactorX;
- (float)scaleFactorY;
- (id)upsampleParams;

@end
