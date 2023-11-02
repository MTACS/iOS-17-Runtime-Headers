
@interface NSMemoryHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {
    NSMutableDictionary * memoryCookies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deleteAllCookies;
- (void)deleteCookie:(id)arg1;
- (void)deleteCookies:(id)arg1;
- (void)deleteCookiesWithFilter:(id)arg1;
- (id)getAllCookies;
- (id)getCookiesWithFilter:(id)arg1;
- (id)init;
- (void)setCookie:(id)arg1;
- (void)setCookies:(id)arg1;

@end
