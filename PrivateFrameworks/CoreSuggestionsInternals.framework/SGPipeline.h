
@interface SGPipeline : NSObject {
    NSDictionary * _dissectorsAndDependencies;
}

+ (void)_delayedResetCachesAndModels;
+ (void)_resetCachesAndModels;
+ (id)customPipeline:(id)arg1;
+ (id)deliveriesTestingPipeline;
+ (id)dependencyClassesForDissectorClass:(Class)arg1;
+ (id)emptyPipeline;
+ (id)fullPipeline;
+ (void)initialize;
+ (id)parallelPipeline:(id)arg1;
+ (id)remindersTestingPipeline;
+ (id)remindersTestingPipelineWithCustomReminderDissector:(id)arg1;
+ (id)retrainingPipeline;
+ (id)sharedBackgroundProcessingQueue;
+ (id)sharedBackgroundStorageQueue;

- (void).cxx_destruct;
- (void)_dissectEntity:(id)arg1 inContext:(id)arg2 andThen:(id /* block */)arg3;
- (id)_dissectOperations:(id)arg1 block:(id /* block */)arg2;
- (id)_dissectOperations:(id)arg1 inContext:(id)arg2;
- (void)dissect:(id)arg1;
- (void)dissect:(id)arg1 andStore:(id)arg2;
- (void)dissect:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStore:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2 destinationStore:(id)arg3;
- (void)dissectAndStoreSpotlightEntity:(id)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 inContext:(id)arg5;
- (void)dissectEntity:(id)arg1 andStore:(id)arg2;
- (id)dissectOperationsForInteraction:(id)arg1 entity:(id)arg2 inContext:(id)arg3;
- (id)dissectOperationsForMailMessage:(id)arg1 entity:(id)arg2 inContext:(id)arg3;
- (id)dissectOperationsForTextMessage:(id)arg1 entity:(id)arg2 inContext:(id)arg3;
- (id)dissectors;
- (id)geocodeOperation:(id)arg1 withDependencies:(id)arg2;
- (void)logDKIMStatus:(long long)arg1 forPipelineEntity:(id)arg2;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6 originalEnrichmentCount:(unsigned long long)arg7;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3 originalEnrichmentCount:(unsigned long long)arg4;
- (id)verificationOperation:(id)arg1 overrideVerificationStatus:(id)arg2 withDependencies:(id)arg3;
- (id)verificationOperation:(id)arg1 withDependencies:(id)arg2;

@end
