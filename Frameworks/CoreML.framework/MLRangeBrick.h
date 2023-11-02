
@interface MLRangeBrick : NSObject <EspressoBrick> {
    float  _endValueParameter;
    int  _size;
    float  _start;
    float  _startValueParameter;
    float  _stepSize;
    float  _stepSizeValueParameter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float endValueParameter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int size;
@property (nonatomic, readonly) float start;
@property (nonatomic, readonly) float startValueParameter;
@property (nonatomic, readonly) float stepSize;
@property (nonatomic, readonly) float stepSizeValueParameter;
@property (readonly) Class superclass;

- (id)computeDynamicOutputShape:(id)arg1;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (float)endValueParameter;
- (bool)hasDynamicOutputShape:(unsigned long long)arg1;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (int)size;
- (float)start;
- (float)startValueParameter;
- (float)stepSize;
- (float)stepSizeValueParameter;

@end
