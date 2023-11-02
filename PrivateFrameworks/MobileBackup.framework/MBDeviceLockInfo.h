
@interface MBDeviceLockInfo : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    NSString * _deviceName;
    NSString * _deviceUUID;
    NSDate * _expirationDate;
    NSString * _ownerDeviceName;
    NSString * _ownerDeviceUUID;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *deviceUUID;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSString *ownerDeviceName;
@property (nonatomic, retain) NSString *ownerDeviceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (id)deviceName;
- (id)deviceUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)ownerDeviceName;
- (id)ownerDeviceUUID;
- (void)setCreationDate:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setOwnerDeviceName:(id)arg1;
- (void)setOwnerDeviceUUID:(id)arg1;

@end
