
@interface ASCloudKitServerChangeTokenCache : NSObject <NSCopying> {
    NSMutableDictionary * _databaseChangeTokensByDatabaseScope;
    NSObject<OS_dispatch_queue> * _serialQueue;
    double  _timestamp;
    NSMutableDictionary * _zoneChangeTokensByZoneID;
}

@property (getter=isExpired, nonatomic) bool expired;

+ (id)changeTokenCacheFromUserDefaultsWithSerialQueue:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (bool)isExpired;
- (void)persistToUserDefaults;
- (id)serverChangeTokenForDatabase:(id)arg1;
- (id)serverChangeTokenForRecordZoneID:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setServerChangeToken:(id)arg1 forDatabase:(id)arg2;
- (void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;

@end
