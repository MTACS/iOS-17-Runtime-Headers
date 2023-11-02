
@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedCookieStore;

- (void).cxx_destruct;
- (id)_accountForUserIdentifier:(id)arg1;
- (id)_cookieDictionaryForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)_saveCookies:(id)arg1 userIdentifier:(id)arg2;
- (void)dealloc;
- (id)getCookieWithName:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesForURL:(id)arg1;
- (id)getCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesForUserIdentifier:(id)arg1;
- (id)getCookiesHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)getGlobalAccountCookiesForURL:(id)arg1;
- (id)init;
- (void)removeAllCookies;
- (void)removeCookiesWithProperties:(id)arg1;
- (void)saveCookies:(id)arg1 forURL:(id)arg2;
- (void)saveCookies:(id)arg1 forURL:(id)arg2 userIdentifier:(id)arg3;
- (void)saveGlobalAccountCookies:(id)arg1 forURL:(id)arg2;

@end
