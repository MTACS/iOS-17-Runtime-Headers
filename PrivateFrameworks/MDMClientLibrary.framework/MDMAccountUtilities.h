
@interface MDMAccountUtilities : NSObject

+ (id)_createMissingBearerTokenError;
+ (id)_createMissingRMAccountError;
+ (id)_longLivedTokenFromRMAccount:(id)arg1 inStore:(id)arg2;
+ (id)_shortLivedTokenFromRMAccount:(id)arg1 inStore:(id)arg2;
+ (id)authenticatorForRMAccountID:(id)arg1;
+ (id)bearerTokenForRMAccountID:(id)arg1 error:(id*)arg2;
+ (id)maidPropertiesForRMAccountID:(id)arg1;
+ (void)removeMAIDShortLivedTokenWithAccount:(id)arg1;
+ (id)rmAccountWithIdentifier:(id)arg1 fromStore:(id)arg2 error:(id*)arg3;
+ (void)stashMAIDShortLivedTokenWithAccount:(id)arg1 authenticationResults:(id)arg2;
+ (bool)updateOrganizationName:(id)arg1 rmAccountIdentifier:(id)arg2 personaID:(id)arg3 error:(id*)arg4;

@end
