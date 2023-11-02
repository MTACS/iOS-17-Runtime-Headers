
@interface ENCredentials : NSObject <NSCoding> {
    NSString * _authenticationToken;
    NSString * _edamUserId;
    NSDate * _expirationDate;
    NSString * _host;
    NSString * _noteStoreUrl;
    NSString * _webApiUrlPrefix;
}

@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSString *edamUserId;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, copy) NSString *noteStoreUrl;
@property (nonatomic, copy) NSString *webApiUrlPrefix;

- (void).cxx_destruct;
- (bool)areValid;
- (id)authenticationToken;
- (void)deleteFromKeychain;
- (id)edamUserId;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)host;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 authenticationResult:(id)arg2;
- (id)initWithHost:(id)arg1 edamUserId:(id)arg2 noteStoreUrl:(id)arg3 webApiUrlPrefix:(id)arg4 authenticationToken:(id)arg5 expirationDate:(id)arg6;
- (id)keychainQuery;
- (id)noteStoreUrl;
- (bool)saveToKeychain;
- (void)setAuthenticationToken:(id)arg1;
- (void)setEdamUserId:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setNoteStoreUrl:(id)arg1;
- (void)setWebApiUrlPrefix:(id)arg1;
- (id)webApiUrlPrefix;

@end
