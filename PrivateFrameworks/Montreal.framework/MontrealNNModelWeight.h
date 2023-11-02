
@interface MontrealNNModelWeight : MontrealNNDescription <MontrealNNDescriptionProtocol> {
    NSArray * _dimension;
    NSNumber * _index;
    NSString * _jsonDir;
    NSString * _name;
    MontrealNNModelQuantization * _quantization;
    NSData * _weightData;
    NSArray * _weightValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *dimension;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *index;
@property (readonly) NSString *jsonDir;
@property (readonly) NSString *name;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) Class superclass;
@property (readonly) NSData *weightData;
@property (readonly) NSArray *weightValues;

- (void).cxx_destruct;
- (id)checkForValidity;
- (id)createConvertArrayToData:(id)arg1 quantization:(id)arg2;
- (id)createDataContainer;
- (id)createflattenWeightsFile:(id)arg1;
- (id)createflattenWeightsHierarchy:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)dimension;
- (void)generateJSONAtPath:(id)arg1;
- (id)index;
- (id)initWithDictionary:(id)arg1 quantization:(id)arg2 jsonDir:(id)arg3;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightData:(id)arg4;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightValues:(id)arg4;
- (id)jsonDescription;
- (id)jsonDir;
- (id)name;
- (id)quantization;
- (id)weightData;
- (id)weightValues;

@end
