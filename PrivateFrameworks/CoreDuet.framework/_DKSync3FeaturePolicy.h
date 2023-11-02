
@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods> {
    bool  _additionTriggersImmediateSync;
    bool  _additionsCountTowardTriggeredSyncBucket;
    bool  _deletionTriggersImmediateSync;
    bool  _deletionsCountTowardTriggeredSyncBucket;
    NSArray * _destinations;
    NSString * _feature;
    bool  _isSyncDisabled;
    NSString * _name;
    unsigned long long  _oldestEventToSyncInDays;
    bool  _onlyMultiDevice;
    bool  _onlySingleDevice;
    unsigned long long  _periodicSyncCadenceInMinutes;
    NSDictionary * _properties;
    bool  _pushTriggersSync;
    bool  _requiresCharging;
    NSArray * _requiresCompanions;
    NSArray * _sources;
    NSArray * _streamNames;
    NSString * _transport;
}

@property (nonatomic, retain) NSDictionary *properties;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
