
@interface DAEASOAuthClient : NSObject

+ (id)_defaultScopeWithDomainForOAuthType:(unsigned long long)arg1;
+ (id)_defaultScopeWithoutDomainForOAuthType:(unsigned long long)arg1 forToken:(bool)arg2;
+ (id)clientIDForOAuthType:(unsigned long long)arg1;
+ (id)clientRedirect;
+ (id)clientRedirectForOAuthType:(unsigned long long)arg1;
+ (id)defaultScopeForOAuthType:(unsigned long long)arg1 withResourceIdentifier:(id)arg2 forToken:(bool)arg3 isOnPrem:(bool)arg4;
+ (id)defaultScopeForOAuthType:(unsigned long long)arg1 withResourceIdentifier:(id)arg2 isOnPrem:(bool)arg3;
+ (id)scopeForUpgradingFromBasicCreds;

@end
