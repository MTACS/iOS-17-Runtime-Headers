
@interface DAKeySharingConfiguration : NSObject <NSSecureCoding> {
    NSString * _deviceEnteredPasscode;
    NSString * _displayName;
    bool  _enableVehicleEnteredPasscode;
    unsigned long long  _maxRetriesForDeviceEnteredPasscode;
    NSData * _metaData;
    bool  _mockRefreshInstanceCA;
    unsigned long long  _profile;
    NSString * _proprietaryEntitlements;
    long long  _targetDeviceType;
}

@property (nonatomic, readonly) NSString *deviceEnteredPasscode;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) bool enableVehicleEnteredPasscode;
@property (nonatomic, readonly) unsigned long long maxRetriesForDeviceEnteredPasscode;
@property (nonatomic, readonly) NSData *metaData;
@property (nonatomic) bool mockRefreshInstanceCA;
@property (nonatomic, readonly) unsigned long long profile;
@property (nonatomic, readonly) NSString *proprietaryEntitlements;
@property (nonatomic, readonly) long long targetDeviceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceEnteredPasscode;
- (id)displayName;
- (bool)enableVehicleEnteredPasscode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(unsigned long long)arg1 displayName:(id)arg2 metaData:(id)arg3 targetDeviceType:(long long)arg4;
- (id)initWithProfile:(unsigned long long)arg1 displayName:(id)arg2 metaData:(id)arg3 targetDeviceType:(long long)arg4 enableVehiclePasscode:(bool)arg5 maxRetriesForDevicePasscode:(unsigned long long)arg6 deviceEnteredPasscode:(id)arg7 proprietaryEntitlements:(id)arg8;
- (unsigned long long)maxRetriesForDeviceEnteredPasscode;
- (id)metaData;
- (bool)mockRefreshInstanceCA;
- (unsigned long long)profile;
- (id)proprietaryEntitlements;
- (void)setMockRefreshInstanceCA:(bool)arg1;
- (long long)targetDeviceType;

@end
