
@interface RCDeviceInfo : NSObject <RCSerializable> {
    NSString * _appVersion;
    NSString * _buildNumber;
    NSString * _countryCode;
    NSString * _deviceType;
    long long  _dstOffset;
    NSString * _formatVersion;
    NSString * _osVersion;
    NSArray * _preferredLanguages;
    NSString * _seedNumber;
    long long  _utcOffset;
}

@property (nonatomic, readonly, copy) NSString *appVersion;
@property (nonatomic, readonly, copy) NSString *buildNumber;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceType;
@property (nonatomic, readonly) long long dstOffset;
@property (nonatomic, readonly, copy) NSString *formatVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *osVersion;
@property (nonatomic, readonly, copy) NSArray *preferredLanguages;
@property (nonatomic, readonly, copy) NSString *seedNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long utcOffset;

+ (id)defaultDeviceInfo;
+ (id)defaultDeviceInfoWithAppVersion:(id)arg1;
+ (id)defaultDeviceInfoWithAppVersion:(id)arg1 formatVersion:(id)arg2;
+ (id)defaultDeviceInfoWithAppVersion:(id)arg1 formatVersion:(id)arg2 seedNumber:(id)arg3 buildNumber:(id)arg4;

- (void).cxx_destruct;
- (id)appVersion;
- (id)buildNumber;
- (id)countryCode;
- (id)description;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (long long)dstOffset;
- (id)formatVersion;
- (unsigned long long)hash;
- (id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6;
- (id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 countryCode:(id)arg7;
- (id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 countryCode:(id)arg7 formatVersion:(id)arg8;
- (id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 countryCode:(id)arg7 formatVersion:(id)arg8 seedNumber:(id)arg9 buildNumber:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)osVersion;
- (id)preferredLanguages;
- (id)seedNumber;
- (long long)utcOffset;

@end
