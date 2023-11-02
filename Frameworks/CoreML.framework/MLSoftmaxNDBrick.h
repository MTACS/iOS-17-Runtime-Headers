
@interface MLSoftmaxNDBrick : NSObject <EspressoBrick> {
    NSNumber * _axis;
    NSArray * _inputRanks;
    NSArray * _inputShapes;
    NSArray * _outputRanks;
    NSArray * _outputShapes;
    bool  _shapeInfoNeeded;
}

@property (nonatomic, readonly) NSNumber *axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputRanks;
@property (nonatomic, readonly) NSArray *inputShapes;
@property (nonatomic, readonly) NSArray *outputRanks;
@property (nonatomic, readonly) NSArray *outputShapes;
@property (nonatomic, readonly) bool shapeInfoNeeded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)axis;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)inputRanks;
- (id)inputShapes;
- (id)outputRanks;
- (id)outputShapes;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (bool)shapeInfoNeeded;

@end
