
@interface AKPasswordCredential : NSObject <AKCredential> {
    NSString * _password;
    NSString * _userIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *password;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2;
- (id)password;
- (id)userIdentifier;

@end
