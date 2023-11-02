
@interface CPLShareParticipant : NSObject <NSCopying, NSSecureCoding> {
    long long  _acceptanceStatus;
    NSString * _email;
    bool  _hasiCloudAccount;
    bool  _isCurrentUser;
    NSPersonNameComponents * _nameComponents;
    NSString * _participantID;
    long long  _permission;
    NSString * _phoneNumber;
    long long  _role;
    NSString * _userIdentifier;
}

@property (nonatomic) long long acceptanceStatus;
@property (nonatomic, copy) NSString *email;
@property (nonatomic) bool hasiCloudAccount;
@property (nonatomic) bool isCurrentUser;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic) long long permission;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) long long role;
@property (nonatomic, copy) NSString *userIdentifier;

+ (id)descriptionForAcceptanceStatus:(long long)arg1;
+ (id)descriptionForPermission:(long long)arg1;
+ (id)descriptionForRole:(long long)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)acceptanceStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)hasiCloudAccount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1;
- (id)initWithParticipantID:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithUserIdentifier:(id)arg1;
- (id)initWithUserIdentifier:(id)arg1 participantID:(id)arg2 phoneNumber:(id)arg3 email:(id)arg4;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;
- (id)participantID;
- (long long)permission;
- (id)phoneNumber;
- (id)redactedDescription;
- (long long)role;
- (void)setAcceptanceStatus:(long long)arg1;
- (void)setEmail:(id)arg1;
- (void)setHasiCloudAccount:(bool)arg1;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRole:(long long)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end
