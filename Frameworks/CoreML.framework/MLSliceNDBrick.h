
@interface MLSliceNDBrick : NSObject <EspressoBrick> {
    NSArray * _begin_ids;
    NSArray * _begin_masks;
    NSArray * _end_ids;
    NSArray * _end_masks;
    NSArray * _inputRanks;
    NSArray * _inputShapes;
    NSArray * _outputRanks;
    NSArray * _outputShapes;
    int  _rank;
    bool  _shapeInfoNeeded;
    NSArray * _strides;
}

@property (nonatomic, readonly) NSArray *begin_ids;
@property (nonatomic, readonly) NSArray *begin_masks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *end_ids;
@property (nonatomic, readonly) NSArray *end_masks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputRanks;
@property (nonatomic, readonly) NSArray *inputShapes;
@property (nonatomic, readonly) NSArray *outputRanks;
@property (nonatomic, readonly) NSArray *outputShapes;
@property (nonatomic, readonly) int rank;
@property (nonatomic, readonly) bool shapeInfoNeeded;
@property (nonatomic, readonly) NSArray *strides;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)begin_ids;
- (id)begin_masks;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (id)end_ids;
- (id)end_masks;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)inputRanks;
- (id)inputShapes;
- (id)outputRanks;
- (id)outputShapes;
- (int)rank;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (bool)shapeInfoNeeded;
- (id)strides;

@end
