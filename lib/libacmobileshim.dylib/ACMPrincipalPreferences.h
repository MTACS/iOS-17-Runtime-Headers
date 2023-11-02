
@interface ACMPrincipalPreferences : ACMPreferences <ACMPrincipalPreferences> {
    ACFPrincipal * _principal;
}

@property (nonatomic, copy) NSString *clientSecret;
@property (nonatomic, copy) NSNumber *clientSecretCreateDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *personID;
@property (retain) <ACMPreferencesStore> *preferencesStore;
@property (retain) ACFPrincipal *principal;
@property (readonly) Class superclass;

+ (id)preferencesForPrincipal:(id)arg1;

- (id)clientSecret;
- (id)clientSecretCreateDate;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1;
- (id)personID;
- (id)principal;
- (id)realm;
- (void)setClientSecret:(id)arg1;
- (void)setClientSecretCreateDate:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (id)userName;

@end
