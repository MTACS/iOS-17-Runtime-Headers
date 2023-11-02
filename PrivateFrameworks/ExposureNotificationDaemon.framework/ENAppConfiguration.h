
@interface ENAppConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appID;
    double  _callbackIntervalInMin;
    bool  _exposureMatching;
    double  _lastCachedEpochTimeInterval;
    long long  _maxMatchingAttempts;
    long long  _maxTtkMatchAttempt;
    long long  _maxTtkMatchAttemptPerDay;
    NSString * _publicKey;
    NSString * _publicKeyVersion;
    NSString * _regionID;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic) double callbackIntervalInMin;
@property (nonatomic) bool exposureMatching;
@property (nonatomic) double lastCachedEpochTimeInterval;
@property (nonatomic) long long maxMatchingAttempts;
@property (nonatomic) long long maxTtkMatchAttempt;
@property (nonatomic) long long maxTtkMatchAttemptPerDay;
@property (nonatomic, copy) NSString *publicKey;
@property (nonatomic, copy) NSString *publicKeyVersion;
@property (nonatomic, copy) NSString *regionID;

+ (id)appConfigurationForRegion:(id)arg1 withInfo:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appID;
- (double)callbackIntervalInMin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)exposureMatching;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1 andAppConfigInfo:(id)arg2;
- (double)lastCachedEpochTimeInterval;
- (long long)maxMatchingAttempts;
- (long long)maxTtkMatchAttempt;
- (long long)maxTtkMatchAttemptPerDay;
- (id)publicKey;
- (id)publicKeyVersion;
- (id)regionID;
- (void)setAppID:(id)arg1;
- (void)setCallbackIntervalInMin:(double)arg1;
- (void)setExposureMatching:(bool)arg1;
- (void)setLastCachedEpochTimeInterval:(double)arg1;
- (void)setMaxMatchingAttempts:(long long)arg1;
- (void)setMaxTtkMatchAttempt:(long long)arg1;
- (void)setMaxTtkMatchAttemptPerDay:(long long)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyVersion:(id)arg1;
- (void)setRegionID:(id)arg1;

@end
