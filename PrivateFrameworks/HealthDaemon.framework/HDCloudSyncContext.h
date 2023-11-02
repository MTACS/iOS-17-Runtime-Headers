
@interface HDCloudSyncContext : NSObject <NSCopying> {
    NSUUID * _identifier;
    unsigned long long  _options;
    HDXPCPeriodicActivity * _periodicActivity;
    long long  _purpose;
    long long  _reason;
    NSString * _shortIdentifier;
    HKCloudSyncRequest * _syncRequest;
    NSDate * _unitTest_syncDateOverride;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HDXPCPeriodicActivity *periodicActivity;
@property (nonatomic, readonly) long long purpose;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly, copy) NSString *shortIdentifier;
@property (nonatomic, copy) HKCloudSyncRequest *syncRequest;
@property (nonatomic, copy) NSDate *unitTest_syncDateOverride;

+ (id)contextForFastPush;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initForPurpose:(long long)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 periodicActivity:(id)arg4;
- (bool)isEquivalent:(id)arg1;
- (bool)isFastPushOrPull;
- (unsigned long long)options;
- (id)periodicActivity;
- (long long)purpose;
- (long long)reason;
- (void)setSyncRequest:(id)arg1;
- (void)setUnitTest_syncDateOverride:(id)arg1;
- (id)shortIdentifier;
- (id)subContextByAddingOptions:(unsigned long long)arg1;
- (id)subContextByRemovingOptions:(unsigned long long)arg1;
- (id)syncRequest;
- (id)unitTest_syncDateOverride;

@end
