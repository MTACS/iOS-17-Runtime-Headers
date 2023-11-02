
@interface HealthRecordsUI.HealthRecordsSupportedStateChangeListener : NSObject <HKHealthRecordsStoreHealthRecordsSupportedStateChangeListener> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _latestChange;
    void handler;
}

- (void).cxx_destruct;
- (void)healthRecordsStore:(id)arg1 healthRecordsSupportedDidChangeTo:(bool)arg2;
- (id)init;

@end
