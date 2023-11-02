
@interface HealthRecordsUI.IngestionStateChangeListener : NSObject <HKHealthRecordsStoreIngestionStateListener> {
    void handler;
}

- (void).cxx_destruct;
- (void)healthRecordsStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2;
- (id)init;

@end
