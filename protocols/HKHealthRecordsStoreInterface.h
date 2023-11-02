
@protocol HKHealthRecordsStoreInterface <NSObject>

@required

- (void)clientRemote_healthRecordsSupportedDidChangeTo:(bool)arg1;
- (void)clientRemote_updateIngestionState:(long long)arg1;

@end
