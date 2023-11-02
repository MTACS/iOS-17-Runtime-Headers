
@interface ASCPasswordCredential : NSObject <ASCCredentialProtocol> {
    NSDate * _creationDate;
    NSString * _password;
    NSString * _site;
    NSString * _user;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *site;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)password;
- (id)site;
- (id)user;

@end
