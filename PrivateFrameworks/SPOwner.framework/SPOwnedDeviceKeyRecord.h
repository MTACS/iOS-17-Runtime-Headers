
@interface SPOwnedDeviceKeyRecord : NSObject <NSSecureCoding> {
    NSData * _advertisement;
    NSDate * _creationDate;
    NSUUID * _deviceIdentifier;
    NSData * _hashedAdvertisement;
    NSUUID * _identifier;
}

@property (nonatomic, readonly, copy) NSData *advertisement;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSUUID *deviceIdentifier;
@property (nonatomic, readonly, copy) NSData *hashedAdvertisement;
@property (nonatomic, readonly, copy) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisement;
- (id)creationDate;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)hashedAdvertisement;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 deviceIdentifier:(id)arg2 advertisement:(id)arg3 hashedAdvertisement:(id)arg4 creationDate:(id)arg5;

@end
