
@interface SOConfiguration : NSObject <NSSecureCoding> {
    NSArray * _profiles;
}

@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) NSArray *profiles;

+ (id)stringWithHandleResult:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_matchHost:(id)arg1 inCredentialProfile:(id)arg2;
- (id)_profileForURLWithHostScheme:(id)arg1;
- (id)_profileForURLWithRealmScheme:(id)arg1;
- (id)_profileForURLWithSSOIDScheme:(id)arg1;
- (id)_profileForURLWithStandardScheme:(id)arg1 isCredential:(bool)arg2;
- (id)description;
- (bool)empty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1;
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;
- (id)profiles;
- (id)realms;
- (bool)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;
- (long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 profile:(id*)arg4;

@end
