
@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding> {
    NSString * _notesEntry;
    NSURL * _otpAuthURL;
    NSString * _password;
    NSString * _title;
    NSURL * _url;
    NSString * _user;
}

@property (nonatomic, readonly, copy) NSString *notesEntry;
@property (nonatomic, readonly, copy) NSURL *otpAuthURL;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3;
- (id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3 sidecarData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)notesEntry;
- (id)otpAuthURL;
- (id)password;
- (id)title;
- (id)url;
- (id)urlCredentialWithPersistence:(unsigned long long)arg1;
- (id)user;

@end
