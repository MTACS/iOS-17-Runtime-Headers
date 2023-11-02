
@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage {
    unsigned long long  _acceptPolicy;
    bool  _behavesLikeNS;
    NSHTTPCookie2Storage * _store;
}

- (void).cxx_destruct;
- (struct OpaqueCFHTTPCookieStorage { }*)_cookieStorage;
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (void)_saveCookies;
- (void)_saveCookies:(id /* block */)arg1;
- (void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4;
- (void)_setPrivateBrowsingEnabled:(bool)arg1;
- (void)_testingOfStoringOfCookie:(id)arg1;
- (unsigned long long)cookieAcceptPolicy;
- (id)cookies;
- (id)cookiesForURL:(id)arg1;
- (void)dealloc;
- (void)deleteCookie:(id)arg1;
- (void)getCookiesForTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)removeCookiesSinceDate:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (void)storeCookies:(id)arg1 forTask:(id)arg2;

@end
