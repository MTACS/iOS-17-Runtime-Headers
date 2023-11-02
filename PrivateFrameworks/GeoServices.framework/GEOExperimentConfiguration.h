
@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {
    GEOObserverHashTable * _experimentObservers;
    GEOABAssignmentResponse * _experimentsInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _experimentsInfoLock;
    <GEOExperimentServerProxy> * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConfiguration;
+ (void)useProxy:(Class)arg1;

- (void).cxx_destruct;
- (id)_debug_bucketId;
- (id)_debug_configurationDate;
- (id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (id)_debug_datasetId;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)arg1;
- (void)_debug_forEachExperimentType:(id /* block */)arg1;
- (void)_debug_forceUpdate;
- (void)_debug_setActiveExperimentBranch:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_fetchAllAvailableExperimentsResponse:(id /* block */)arg1;
- (id)_mapsAbClientMetadata;
- (id)_parsecClientMetadata;
- (id)_reportAProblemClientMetadata;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (id)_siriClientMetadata;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)arg1;
- (void)addExperimentObserver:(id)arg1 queue:(id)arg2;
- (id)clientConfig;
- (id)clientConfigurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)experimentAssignments;
- (id)experimentURLForURL:(id)arg1 requestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2;
- (id)experimentsInfo;
- (id)init;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)removeExperimentObserver:(id)arg1;
- (void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2;
- (void)updateURLComponents:(id)arg1 forRequestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2;

@end
