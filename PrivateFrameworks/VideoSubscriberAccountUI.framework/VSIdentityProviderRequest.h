
@interface VSIdentityProviderRequest : NSObject {
    VSAccount * _account;
    VSOptional * _accountMetadataRequest;
    NSString * _accountProviderAuthenticationToken;
    NSString * _requestingAppAdamID;
    NSString * _requestingAppDisplayName;
    VSPersistentStorage * _storage;
    long long  _type;
}

@property (nonatomic, retain) VSAccount *account;
@property (nonatomic, retain) VSOptional *accountMetadataRequest;
@property (nonatomic, copy) NSString *accountProviderAuthenticationToken;
@property (nonatomic, readonly) bool allowsUI;
@property (nonatomic, readonly) bool forceAuthentication;
@property (nonatomic, copy) NSString *requestingAppAdamID;
@property (nonatomic, copy) NSString *requestingAppDisplayName;
@property (nonatomic, readonly) bool requiresUI;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (nonatomic) long long type;

+ (id)STBOptOutRequestWithStorage:(id)arg1;
+ (id)accountMetadataRequestWithAccount:(id)arg1 storage:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4 requestingAppAdamID:(id)arg5 accountProviderAuthenticationToken:(id)arg6;
+ (id)deleteAccountRequestWithAccount:(id)arg1 storage:(id)arg2;
+ (id)makeAccountRequestWithStorage:(id)arg1;
+ (id)silentMakeAccountRequestWithStorage:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithRequestType:(long long)arg1 account:(id)arg2 storage:(id)arg3;
- (id)account;
- (id)accountMetadataRequest;
- (id)accountProviderAuthenticationToken;
- (bool)allowsUI;
- (id)description;
- (bool)forceAuthentication;
- (id)init;
- (id)requestingAppAdamID;
- (id)requestingAppDisplayName;
- (bool)requiresUI;
- (void)setAccount:(id)arg1;
- (void)setAccountMetadataRequest:(id)arg1;
- (void)setAccountProviderAuthenticationToken:(id)arg1;
- (void)setRequestingAppAdamID:(id)arg1;
- (void)setRequestingAppDisplayName:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setType:(long long)arg1;
- (id)storage;
- (long long)type;

@end
