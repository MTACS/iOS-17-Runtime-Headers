
@interface MLSplitNDBrick : NSObject <EspressoBrick> {
    NSNumber * _axis;
    NSArray * _inputRanks;
    NSArray * _inputShapes;
    NSNumber * _numSplits;
    NSArray * _outputRanks;
    NSArray * _outputShapes;
    bool  _shapeInfoNeeded;
    NSArray * _splitSizes;
}

@property (nonatomic, readonly) NSNumber *axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputRanks;
@property (nonatomic, readonly) NSArray *inputShapes;
@property (nonatomic, readonly) NSNumber *numSplits;
@property (nonatomic, readonly) NSArray *outputRanks;
@property (nonatomic, readonly) NSArray *outputShapes;
@property (nonatomic, readonly) bool shapeInfoNeeded;
@property (nonatomic, readonly) NSArray *splitSizes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)axis;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)inputRanks;
- (id)inputShapes;
- (id)numSplits;
- (id)outputRanks;
- (id)outputShapes;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (bool)shapeInfoNeeded;
- (id)splitSizes;

@end
