
@interface CPMLTrainer : NSObject {
    struct CPMLDelegate { void *x1; void *x2; } * _cpmlDelegate;
    CPMLStorageManager * _storageManager;
    <CPMLAlgorithmProtocol> * _theDelegate;
    struct CPMLCDB { struct CPMLStatistics {} *x1; struct sqlite3 {} *x2; struct sqlite3 {} *x3; struct CPMLIterator {} *x4; struct CPMLRemapper {} *x5; struct CPMLTunableData {} *x6; } * cpCDB;
    struct CPMLAlgorithm { int (**x1)(); BOOL x2[32]; void *x3; struct CPMLCDB {} *x4; struct CPMLDelegate {} *x5; struct CPMLDelegateEngine {} *x6; struct CPMLTunableData {} *x7; struct CPMLIterator {} *x8; struct CPMLSerialization {} *x9; } * cpMLAlgo;
    void * cpRemapper;
    struct CPMLTunableData { int x1; void *x2; void *x3; } * cpTuneableData;
    CPMLDB * cpmlDB;
    CPMLSchema * cpmlSchema;
    int  mapFunction;
    struct sqlite3 { } * modelDB;
    NSDictionary * modelPlist;
    bool  shouldFail;
    struct CPMLSerialization { int (**x1)(); bool x2; int x3; int x4; void *x5; struct sqlite3 {} *x6; } * trainerCPSerializer;
    void * trainerCPStatistics;
}

- (void).cxx_destruct;
- (void)buildTrainingMachineLearningAlgorithm:(id)arg1;
- (void)dealloc;
- (id)fileProtectionClassRequest:(id)arg1;
- (id)getSolution;
- (id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3;
- (void)train:(bool)arg1;

@end
