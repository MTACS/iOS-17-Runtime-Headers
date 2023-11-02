
@protocol NSInternalHTTPCookie2Storage <NSObject>

@required

- (void)deleteAllCookies;
- (void)deleteCookie:(NSHTTPCookie2 *)arg1;
- (void)deleteCookies:(NSArray *)arg1;
- (void)deleteCookiesWithFilter:(NSHTTPCookie2LookupFilter *)arg1;
- (NSArray *)getAllCookies;
- (NSArray *)getCookiesWithFilter:(NSHTTPCookie2LookupFilter *)arg1;
- (void)setCookie:(NSHTTPCookie2 *)arg1;
- (void)setCookies:(NSArray *)arg1;

@end
