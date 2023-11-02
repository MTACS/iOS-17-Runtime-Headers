
@interface POTokenHelper : NSObject

+ (id)dataToHex:(id)arg1;

- (id)base64URLtokenHashForUser:(id)arg1;
- (id)findNameForTokenId:(id)arg1 returningHash:(id*)arg2 wrapHash:(id*)arg3;
- (id)findTokenIdForSmartCardAMUser:(id)arg1;
- (id)findTokenIdForSmartCardBoundUser:(id)arg1;
- (id)getTokenInfo;
- (bool)insertTokenForUser:(id)arg1;
- (void)postAHPCacheRefreshNotification;
- (void)removeTokenForUser:(id)arg1;
- (bool)retrieveCertAndKeyForTokenId:(id)arg1 context:(id)arg2 certificate:(struct __SecCertificate {}**)arg3 privateKey:(struct __SecKey {}**)arg4;
- (id)tokenHashDataForUser:(id)arg1;
- (id)tokenHashForUser:(id)arg1;
- (bool)waitForTokenAvailable:(id)arg1;

@end
