
@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient> {
    HKSPSleepStore * _sleepStore;
}

@property (nonatomic) HKSPSleepStore *sleepStore;

- (void).cxx_destruct;
- (id)_mergeExternalSleepEventRecordChange:(id)arg1 clientIdentifier:(id)arg2;
- (id)_mergeExternalSleepScheduleChange:(id)arg1 clientIdentifier:(id)arg2;
- (id)_mergeExternalSleepSettingsChange:(id)arg1 clientIdentifier:(id)arg2;
- (void)clientShouldCheckInWithCompletion:(id /* block */)arg1;
- (void)getClientIdentifierWithCompletion:(id /* block */)arg1;
- (void)setSleepStore:(id)arg1;
- (void)sleepEventOccurred:(id)arg1;
- (void)sleepEventRecordChanged:(id)arg1 clientIdentifier:(id)arg2;
- (void)sleepModeChanged:(id)arg1;
- (void)sleepScheduleChanged:(id)arg1 clientIdentifier:(id)arg2;
- (void)sleepScheduleStateChanged:(id)arg1;
- (void)sleepSettingsChanged:(id)arg1 clientIdentifier:(id)arg2;
- (id)sleepStore;

@end
