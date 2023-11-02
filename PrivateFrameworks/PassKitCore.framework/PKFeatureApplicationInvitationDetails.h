
@interface PKFeatureApplicationInvitationDetails : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _accountUserAccessLevel;
    NSString * _accountUserAltDSID;
    NSString * _accountUserFirstName;
    NSString * _accountUserLastName;
    NSString * _originatorAltDSID;
    NSString * _originatorFirstName;
    NSString * _originatorLastName;
}

@property (nonatomic) unsigned long long accountUserAccessLevel;
@property (nonatomic, copy) NSString *accountUserAltDSID;
@property (nonatomic, copy) NSString *accountUserFirstName;
@property (nonatomic, copy) NSString *accountUserLastName;
@property (nonatomic, readonly) NSPersonNameComponents *accountUserNameComponents;
@property (nonatomic, copy) NSString *originatorAltDSID;
@property (nonatomic, copy) NSString *originatorFirstName;
@property (nonatomic, copy) NSString *originatorLastName;
@property (nonatomic, readonly) NSPersonNameComponents *originatorNameComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accountUserAccessLevel;
- (id)accountUserAltDSID;
- (id)accountUserFirstName;
- (id)accountUserLastName;
- (id)accountUserNameComponents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountUserAltDSID:(id)arg1 accessLevel:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)originatorAltDSID;
- (id)originatorFirstName;
- (id)originatorLastName;
- (id)originatorNameComponents;
- (void)setAccountUserAccessLevel:(unsigned long long)arg1;
- (void)setAccountUserAltDSID:(id)arg1;
- (void)setAccountUserFirstName:(id)arg1;
- (void)setAccountUserLastName:(id)arg1;
- (void)setOriginatorAltDSID:(id)arg1;
- (void)setOriginatorFirstName:(id)arg1;
- (void)setOriginatorLastName:(id)arg1;

@end
