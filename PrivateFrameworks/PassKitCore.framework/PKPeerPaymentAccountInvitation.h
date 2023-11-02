
@interface PKPeerPaymentAccountInvitation : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    unsigned long long  _registrationResult;
    long long  _remoteRegistrationRequestLevel;
    long long  _status;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) unsigned long long registrationResult;
@property (nonatomic) long long remoteRegistrationRequestLevel;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)registrationResult;
- (long long)remoteRegistrationRequestLevel;
- (void)setAltDSID:(id)arg1;
- (void)setRegistrationResult:(unsigned long long)arg1;
- (void)setRemoteRegistrationRequestLevel:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
