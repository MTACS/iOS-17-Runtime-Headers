
@interface HKClinicalSharingStatus : NSObject <NSCopying, NSSecureCoding> {
    long long  _featureStatus;
    NSDate * _firstSharedDate;
    NSDate * _lastSharedDate;
    long long  _multiDeviceStatus;
    NSString * _primaryDeviceName;
    long long  _userStatus;
}

@property (nonatomic, readonly) long long featureStatus;
@property (nonatomic, readonly, copy) NSDate *firstSharedDate;
@property (nonatomic, readonly, copy) NSDate *lastSharedDate;
@property (nonatomic, readonly) long long multiDeviceStatus;
@property (nonatomic, readonly, copy) NSString *primaryDeviceName;
@property (nonatomic, readonly) long long userStatus;

+ (long long)clinicalSharingFeatureStatusWithAccountState:(long long)arg1 gatewayFeatureStatus:(long long)arg2;
+ (bool)supportsSecureCoding;
+ (id)unknownStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)featureStatus;
- (id)firstSharedDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstSharedDate:(id)arg1 lastSharedDate:(id)arg2 featureStatus:(long long)arg3 userStatus:(long long)arg4 multiDeviceStatus:(long long)arg5 primaryDeviceName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)lastSharedDate;
- (long long)multiDeviceStatus;
- (id)primaryDeviceName;
- (long long)userStatus;

@end
