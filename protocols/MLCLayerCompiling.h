
@protocol MLCLayerCompiling <NSObject>

@required

- (bool)allocateDataForOptimizer:(MLCOptimizer *)arg1;
- (bool)compileForDevice:(MLCDevice *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3;
- (bool)compileForDevice:(MLCDevice *)arg1 sourceTensors:(NSArray *)arg2 resultTensors:(NSArray *)arg3;

@end
