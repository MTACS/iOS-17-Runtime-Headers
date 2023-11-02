
@interface SOSmartcard : NSObject

+ (id)availableSmartCards;
+ (int)getIdentityForPersistentRef:(struct __CFData { }*)arg1 identityToReturn:(struct __SecIdentity {}**)arg2;
+ (struct __SecIdentity { }*)getLocalAuthIdentityForCert:(id)arg1 withLAContext:(id)arg2;
+ (bool)pollSmartcardForIdentityWithPersistentRef:(id)arg1 tokenID:(id)arg2;
+ (id)searchForCachedIdentityPersistentRef:(id)arg1 tokenID:(id)arg2;
+ (id)searchForCachedIdentityWithSerial:(struct __CFData { }*)arg1 withIssuer:(struct __CFData { }*)arg2 withTokenID:(id)arg3;

@end
