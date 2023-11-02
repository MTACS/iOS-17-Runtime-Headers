
@interface RPNearFieldTapEvent : NSObject <NSSecureCoding> {
    NSString * _accountID;
    NSString * _applicationLabel;
    NSUUID * _bonjourListenerUUID;
    NSString * _contactID;
    NSDate * _date;
    NSString * _deviceModel;
    NSString * _deviceName;
    unsigned int  _flags;
    NSString * _identifier;
    bool  _isKnownIdentity;
    bool  _isSameAccount;
    NSData * _pkData;
    bool  _shouldForceSingleBandAWDLMode;
}

@property (nonatomic, copy) NSString *accountID;
@property (nonatomic, readonly) NSString *applicationLabel;
@property (nonatomic, readonly) NSUUID *bonjourListenerUUID;
@property (nonatomic, copy) NSString *contactID;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isKnownIdentity;
@property (nonatomic, readonly) bool isSameAccount;
@property (nonatomic, readonly) NSData *pkData;
@property (nonatomic, readonly) bool shouldForceSingleBandAWDLMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)applicationLabel;
- (id)bonjourListenerUUID;
- (id)contactID;
- (id)date;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceModel;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 applicationLabel:(id)arg2 pkData:(id)arg3 bonjourListenerUUID:(id)arg4 isSameAccount:(bool)arg5 contactID:(id)arg6 forceSingleBandAWDLMode:(bool)arg7 knownIdentity:(bool)arg8;
- (bool)isKnownIdentity;
- (bool)isSameAccount;
- (id)pkData;
- (void)setAccountID:(id)arg1;
- (void)setContactID:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (bool)shouldForceSingleBandAWDLMode;

@end
