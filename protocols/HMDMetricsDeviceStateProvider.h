
@protocol HMDMetricsDeviceStateProvider

@required

- (unsigned long long)bitMappedDuplicateKeys;
- (unsigned long long)bitMappedMissingKeys;
- (unsigned long long)currentDataSyncState;
- (unsigned long long)currentHomeManagerStatus;
- (long long)deviceDaysSinceSoftwareUpdate;

@end
