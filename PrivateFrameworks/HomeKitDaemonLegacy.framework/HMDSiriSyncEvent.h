
@interface HMDSiriSyncEvent : HMMLogEvent {
    unsigned long long  _configurationVersion;
    unsigned long long  _duration;
    unsigned long long  _lastSyncedConfigurationVersion;
    NSArray * _notificationReasons;
    unsigned long long  _serverConfigurationVersion;
}

@property (nonatomic, readonly) unsigned long long configurationVersion;
@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly) unsigned long long lastSyncedConfigurationVersion;
@property (nonatomic, readonly) NSArray *notificationReasons;
@property (nonatomic, readonly) unsigned long long serverConfigurationVersion;

+ (id)syncRequestWithDuration:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5;

- (void).cxx_destruct;
- (unsigned long long)configurationVersion;
- (unsigned long long)duration;
- (id)initWithDuration:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5;
- (unsigned long long)lastSyncedConfigurationVersion;
- (id)notificationReasons;
- (unsigned long long)serverConfigurationVersion;

@end
