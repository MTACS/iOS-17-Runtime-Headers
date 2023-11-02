
@interface PPTrialWrapper : NSObject {
    PPSQLDatabase * _db;
    _PASLock * _lock;
    NSDictionary * _namespaceNamesIdsDict;
    TRIClient * _trialClient;
    bool  _useDefaultFiles;
}

@property (nonatomic, readonly) NSString *concatenatedTreatmentNames;
@property (nonatomic, readonly) unsigned int treatmentsHash;

+ (id)sharedInstance;
+ (id)sharedTrialClient;

- (void).cxx_destruct;
- (void)_addDefaultUpdateHandlersForAllNamespacesWithGuardedData:(id)arg1;
- (id)_loadMLModelForModelName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3;
- (void)_updateConcatenatedTreatmentNamesAndHash;
- (id)addUpdateHandlerForNamespaceName:(id)arg1 block:(id /* block */)arg2;
- (void)callRegisteredUpdateHandlers;
- (void)callRegisteredUpdateHandlersForNamespaceName:(id)arg1;
- (void)clearOverrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2;
- (id)concatenatedTreatmentNames;
- (void)dealloc;
- (id)defaultFilepathForFactor:(id)arg1 namespaceName:(id)arg2;
- (id)directoryForFactorName:(id)arg1 namespaceName:(id)arg2;
- (id)filepathForFactor:(id)arg1 namespaceName:(id)arg2;
- (id)filepathForFactorName:(id)arg1 namespaceName:(id)arg2 isDirectory:(bool)arg3;
- (bool)hasFactor:(id)arg1 namespaceName:(id)arg2;
- (bool)hasModel:(id)arg1 namespaceName:(id)arg2;
- (bool)hasOverrideForFileFactor:(id)arg1 namespaceName:(id)arg2;
- (id)initWithSettings:(id)arg1 database:(id)arg2 trialClient:(id)arg3;
- (id)lastTreatmentUpdate;
- (id)lastTreatmentUpdateForNamespaceName:(id)arg1;
- (id)lazyPlistForFactorName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3;
- (id)levelForFactor:(id)arg1 namespaceName:(id)arg2;
- (id)mlModelForModelName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3;
- (id)mlModelPathForModelName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3;
- (void)overrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2 path:(id)arg3;
- (id)plistForFactorName:(id)arg1 namespaceName:(id)arg2;
- (id)readableTreatmentsMapping;
- (void)removeUpdateHandlerForToken:(id)arg1;
- (void)setUseDefaultFiles:(bool)arg1;
- (id)treatmentNameForNamespaceName:(id)arg1;
- (unsigned int)treatmentsHash;
- (id)trieForFactorName:(id)arg1 namespaceName:(id)arg2;

@end
