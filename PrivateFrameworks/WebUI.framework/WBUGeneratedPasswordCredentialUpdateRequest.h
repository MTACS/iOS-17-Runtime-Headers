
@interface WBUGeneratedPasswordCredentialUpdateRequest : NSObject {
    NSString * _generatedPassword;
    NSString * _lastGeneratedPassword;
    NSURLProtectionSpace * _protectionSpace;
    bool  _shouldSaveNewCredential;
    NSURL * _urlForCredential;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSString *generatedPassword;
@property (nonatomic, readonly, copy) NSString *lastGeneratedPassword;
@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;
@property (nonatomic, readonly) bool shouldSaveNewCredential;
@property (nonatomic, readonly) NSURL *urlForCredential;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)requestWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(bool)arg6;

- (void).cxx_destruct;
- (id)_initRequestWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(bool)arg6;
- (id)generatedPassword;
- (id)lastGeneratedPassword;
- (id)protectionSpace;
- (bool)shouldSaveNewCredential;
- (id)urlForCredential;
- (id)username;

@end
