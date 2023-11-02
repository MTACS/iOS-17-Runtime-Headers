
@protocol MLCustomLayer

@required

- (bool)evaluateOnCPUWithInputs:(NSArray *)arg1 outputs:(NSArray *)arg2 error:(id*)arg3;
- (id)initWithParameterDictionary:(NSDictionary *)arg1 error:(id*)arg2;
- (NSArray *)outputShapesForInputShapes:(NSArray *)arg1 error:(id*)arg2;
- (bool)setWeightData:(NSArray *)arg1 error:(id*)arg2;

@optional

- (bool)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 inputs:(NSArray *)arg2 outputs:(NSArray *)arg3 error:(id*)arg4;

@end
