
@interface SFSafariCredential : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    NSString * _customTitle;
    <SFSafariPasswordCredential> * _externalCredential;
    NSString * _groupName;
    bool  _isDefaultForAnAssociatedDomain;
    bool  _isExternalPasskey;
    NSString * _password;
    NSString * _site;
    NSString * _user;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *customTitle;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (nonatomic, readonly) <SFSafariPasswordCredential> *externalCredential;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (nonatomic) bool isDefaultForAnAssociatedDomain;
@property (nonatomic, readonly) bool isExternalPasskey;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *site;
@property (nonatomic, readonly) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (id)customTitle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalCredential;
- (id)groupName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalCredential:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 customTitle:(id)arg5;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 customTitle:(id)arg5 groupName:(id)arg6;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 groupName:(id)arg5;
- (bool)isDefaultForAnAssociatedDomain;
- (bool)isEqual:(id)arg1;
- (bool)isExternal;
- (bool)isExternalPasskey;
- (id)password;
- (void)setIsDefaultForAnAssociatedDomain:(bool)arg1;
- (id)site;
- (id)user;

@end
