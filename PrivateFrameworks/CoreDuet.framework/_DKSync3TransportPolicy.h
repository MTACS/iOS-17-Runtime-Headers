
@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods> {
    unsigned long long  _additionsBucketCountTriggeringSync;
    unsigned long long  _deletionsBucketCountTriggeringSync;
    bool  _isSyncDisabled;
    unsigned long long  _maximumBatchesPerSync;
    unsigned long long  _maximumSyncsPerDay;
    unsigned long long  _minimumSyncWindowInSeconds;
    unsigned long long  _minimumTimeBetweenSyncsInSeconds;
    NSString * _name;
    NSDictionary * _properties;
    unsigned long long  _singleDevicePeriodicSyncCadenceInDays;
    unsigned long long  _syncBatchSizeInEvents;
    NSString * _transport;
}

@property (nonatomic, retain) NSDictionary *properties;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
