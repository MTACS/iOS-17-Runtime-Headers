
@interface MPCPlaybackDelegationProperties : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _deviceGUID;
    NSString * _deviceName;
    NSString * _requestUserAgent;
    unsigned long long  _storeAccountID;
    long long  _systemReleaseType;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceGUID;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *requestUserAgent;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long systemReleaseType;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;

+ (id)payloadValueFromJSONValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceGUID;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2;
- (id)mpc_jsonValue;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)requestUserAgent;
- (unsigned long long)storeAccountID;
- (long long)systemReleaseType;
- (id)timeZone;

@end
