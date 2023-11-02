
@interface FedStatsDataEncoder : NSObject {
    NSDictionary * _dataTypes;
    NSArray * _typeConfiguration;
}

@property (nonatomic, retain) NSDictionary *dataTypes;
@property (nonatomic, retain) NSArray *typeConfiguration;

+ (id)createWithDataTypeContent:(id)arg1 possibleError:(id*)arg2;
+ (bool)encodeDataAndRecord:(id)arg1 dataTypeContent:(id)arg2 baseKey:(id)arg3 errorOut:(id*)arg4;
+ (bool)encodeDataAndRecord:(id)arg1 dataTypeContent:(id)arg2 metadata:(id)arg3 baseKey:(id)arg4 errorOut:(id*)arg5;
+ (id)encodeDataArray:(id)arg1 dataTypeContent:(id)arg2 resultType:(unsigned long long*)arg3 errorOut:(id*)arg4;
+ (bool)encodeDataArrayAndRecord:(id)arg1 dataTypeContent:(id)arg2 baseKey:(id)arg3 errorOut:(id*)arg4;
+ (bool)encodeDataArrayAndRecord:(id)arg1 dataTypeContent:(id)arg2 metadata:(id)arg3 baseKey:(id)arg4 errorOut:(id*)arg5;
+ (bool)record:(id)arg1 metadata:(id)arg2 baseKey:(id)arg3;

- (void).cxx_destruct;
- (id)dataTypes;
- (id)decodeFromBitVector:(id)arg1 possibleError:(id*)arg2;
- (id)decodeFromBitVector:(id)arg1 withType:(id)arg2 possibleError:(id*)arg3;
- (id)encodeToBitVector:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToBitVector:(id)arg1 withType:(id)arg2 possibleError:(id*)arg3;
- (id)encodeToIndex:(id)arg1 error:(id*)arg2;
- (id)encodeToIndex:(id)arg1 withType:(id)arg2 error:(id*)arg3;
- (id)initWithDataTypes:(id)arg1 combinationTypes:(id)arg2;
- (void)setDataTypes:(id)arg1;
- (void)setTypeConfiguration:(id)arg1;
- (id)typeConfiguration;

@end
