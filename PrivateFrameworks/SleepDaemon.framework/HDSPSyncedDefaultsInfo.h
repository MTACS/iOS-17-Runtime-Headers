
@interface HDSPSyncedDefaultsInfo : NSObject {
    NSString * _cloudDataVersionKey;
    NSString * _cloudSyncEnabledKey;
    unsigned long long  _currentCloudDataVersion;
    unsigned long long  _currentDataVersion;
    unsigned long long  _currentLocalDataVersion;
    NSString * _dataVersionKey;
    NSString * _localDataVersionKey;
}

@property (nonatomic, readonly, copy) NSString *cloudDataVersionKey;
@property (nonatomic, readonly) NSString *cloudSyncEnabledKey;
@property (nonatomic, readonly) unsigned long long currentCloudDataVersion;
@property (nonatomic, readonly) unsigned long long currentDataVersion;
@property (nonatomic, readonly) unsigned long long currentLocalDataVersion;
@property (nonatomic, readonly, copy) NSString *dataVersionKey;
@property (nonatomic, readonly, copy) NSString *localDataVersionKey;

- (void).cxx_destruct;
- (id)cloudDataVersionKey;
- (id)cloudSyncEnabledKey;
- (unsigned long long)currentCloudDataVersion;
- (unsigned long long)currentDataVersion;
- (unsigned long long)currentLocalDataVersion;
- (id)dataVersionKey;
- (id)initWithDataVersionKey:(id)arg1 currentDataVersion:(unsigned long long)arg2 cloudDataVersionKey:(id)arg3 currentCloudDataVersion:(unsigned long long)arg4 cloudSyncEnabledKey:(id)arg5 localDataVersionKey:(id)arg6 currentLocalDataVersion:(unsigned long long)arg7;
- (id)localDataVersionKey;

@end
