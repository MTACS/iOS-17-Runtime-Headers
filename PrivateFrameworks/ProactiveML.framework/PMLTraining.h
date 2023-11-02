
@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol> {
    PMLAWDAvailableSessionsTracker * _availableSessionsTracker;
    DESRecordStore * _fidesStore;
    NSDictionary * _isMultiLabel;
    PMLTrainingStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;

+ (id)sharedSingletonWithDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteAllSavedRecordsFromFidesStoreSync;
- (void)_sendStatsToFidesForModel:(id)arg1 sessionCount:(unsigned long long)arg2 positivesCount:(unsigned long long)arg3 negativesCount:(unsigned long long)arg4 support:(float)arg5;
- (void)_sendStatsToFidesForMultiLabelModel:(id)arg1 sessionCount:(unsigned long long)arg2 labeledStats:(id)arg3;
- (id)_trainWithRecipe:(id)arg1 chunkData:(id)arg2 args:(id)arg3 error:(id*)arg4;
- (void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(bool)arg5;
- (void)availableSessionsStatsReportedToAWD;
- (void)deleteSessionsWithBundleID:(id)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (id)initWithStore:(id)arg1 fidesStore:(id)arg2 availableSessionsTracker:(id)arg3;
- (bool)isMultiLabelModel:(id)arg1;
- (id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2;
- (id)planReceivedWithPayload:(id)arg1 error:(id*)arg2;
- (id)planReceivedWithRecipe:(id)arg1 attachments:(id)arg2 error:(id*)arg3;
- (void)sendSessionStatsToFides;
- (id)store;
- (void)trimDbWithDeferralBlock:(id /* block */)arg1;
- (void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(id /* block */)arg2;

@end
