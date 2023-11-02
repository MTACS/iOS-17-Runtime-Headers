
@interface EDiCloudAliasSupport : NSObject <EFLoggable> {
    ACAccount * _appleAccount;
}

@property (nonatomic, readonly) NSString *aliasAuthorizationHeader;
@property (nonatomic, readonly) NSURL *aliasLookupURL;
@property (nonatomic, readonly) NSString *aliasUserAgent;
@property (nonatomic, readonly) ACAccount *appleAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_prepareAliasDataForEmailAddresses:(id)arg1 defaultEmailAddress:(id)arg2;
- (id)aliasAuthorizationHeader;
- (id)aliasLookupURL;
- (id)aliasUserAgent;
- (id)anisetteDataWithError:(id*)arg1;
- (id)appleAccount;
- (id)initWithAppleAccount:(id)arg1;
- (void)pushUpdateForAliasDataWithEmailAddresses:(id)arg1 defaultEmailAddress:(id)arg2;

@end
