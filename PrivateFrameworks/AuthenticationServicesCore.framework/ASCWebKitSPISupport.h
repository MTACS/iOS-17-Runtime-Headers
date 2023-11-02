
@interface ASCWebKitSPISupport : NSObject

+ (id)alternateLargeBlobIfNecessaryForRelyingParty:(id)arg1 clientDataHash:(id)arg2;
+ (bool)arePasskeysDisallowedForRelyingParty:(id)arg1;
+ (bool)canCurrentProcessAccessPasskeysForRelyingParty:(id)arg1;
+ (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)arg1;
+ (void)getArePasskeysDisallowedForRelyingParty:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)arg1;
+ (void)resetCredentialStore;
+ (void)setShouldUseAlternateCredentialStore:(bool)arg1;
+ (bool)shouldUseAlternateCredentialStore;

@end
