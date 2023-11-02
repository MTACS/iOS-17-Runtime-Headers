
@interface CPMLModelEvaluate : NSObject {
    struct CPMLDelegate { void *x1; void *x2; } * _cpmlDelegate;
    <CPMLAlgorithmProtocol> * _delegateAlgorithm;
    struct CPMLDelegateEngine { void *x1; void *x2; } * _delegateEngine;
    CPMLStorageManager * _storageManager;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  boundedRemappedValues;
    int  countRows;
    struct CPMLAlgorithm { int (**x1)(); BOOL x2[32]; void *x3; struct CPMLCDB {} *x4; struct CPMLDelegate {} *x5; struct CPMLDelegateEngine {} *x6; struct CPMLTunableData {} *x7; struct CPMLIterator {} *x8; struct CPMLSerialization {} *x9; } * cpMLAlgo;
    void * cpRemapper;
    struct CPMLTunableData { int x1; void *x2; void *x3; } * cpTuneableData;
    CPMLSchema * cpmlSchema;
    struct sqlite3 { } * db;
    bool  enableCacheString;
    bool  keepInMemory;
    NSString * machineLearningAlgo;
    int  mapFunction;
    NSNumber * maxRemoveTrainingRow;
    NSMutableArray * modelSchema;
    NSString * serializeFunction;
    bool  shouldFail;
    struct CPMLSerialization { int (**x1)(); bool x2; int x3; int x4; void *x5; struct sqlite3 {} *x6; } * trainerCPDeSerializer;
    void * trainerCPStatistics;
    NSMutableArray * vectorPositions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)boundResult:(id)arg1;
- (void)buildEvaluateMachineLearningAlgorithm;
- (void)constructVector:(void*)arg1 withColumnPosition:(unsigned long long)arg2 maxColNumber:(unsigned long long)arg3 withValue:(id)arg4;
- (void)dealloc;
- (id)doEvaluate:(void*)arg1 withBoundedList:(void*)arg2;
- (void)doRemapToFeatureVector:(void*)arg1 withPositionID:(unsigned long long)arg2 withMaxCol:(unsigned long long)arg3 withValue:(id)arg4;
- (id)evalArray:(id)arg1;
- (id)evalCTypesV:(char *)arg1;
- (id)evalDict:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (int)getAttributeType:(id)arg1;
- (void*)getModelData;
- (id)initWithModel:(id)arg1 withPropertyList:(id)arg2;
- (void)setCPMLAlgorithm:(id)arg1;
- (void)setCPMLAlgorithmEngine:(id)arg1;
- (bool)updateModel:(id)arg1;

@end
