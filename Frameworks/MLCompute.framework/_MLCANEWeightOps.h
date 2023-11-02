
@interface _MLCANEWeightOps : NSObject {
    NSMutableDictionary * _constantTensorMap;
    NSMutableDictionary * _weightFileIndexMap;
    NSMutableArray * _weightFiles;
    NSMutableDictionary * _weights;
}

@property (nonatomic, readonly) NSMutableDictionary *constantTensorMap;
@property (nonatomic, readonly) NSMutableDictionary *weightFileIndexMap;
@property (nonatomic, readonly) NSMutableArray *weightFiles;
@property (nonatomic, readonly) NSMutableDictionary *weights;

+ (id)hexStringForData:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)addWeightData:(id)arg1 hash:(id)arg2;
- (unsigned long long)addWeightData:(id)arg1 weightDataType:(int)arg2;
- (id)constantTensorMap;
- (bool)convertAndComputHashWithWeightData:(id)arg1 weightDataType:(int)arg2 hash:(id*)arg3 convertedData:(id*)arg4;
- (id)init;
- (id)queryConstantTensor:(id)arg1;
- (void)reset;
- (id)weightFileIndexMap;
- (id)weightFiles;
- (id)weights;

@end
