
@protocol VUIAppContextDelegate <NSObject>

@required

- (void)appContext:(void *)arg1 scriptForURL:(void *)arg2 cachePolicy:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: VUIAppContext *, NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, unsigned long long, void*

@optional

- (void)appContext:(VUIAppContext *)arg1 didFailWithError:(NSError *)arg2;
- (void)appContext:(VUIAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2;
- (void)appContext:(VUIAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2 validatedJSString:(NSString *)arg3;
- (void)appContext:(VUIAppContext *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appContext:(VUIAppContext *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
- (void)appContext:(VUIAppContext *)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(NSDictionary *)arg3;
- (bool)appContext:(VUIAppContext *)arg1 shouldStartWithScript:(NSString *)arg2 scriptURL:(NSURL *)arg3;
- (NSData *)sourceApplicationAuditTokenDataForContext:(VUIAppContext *)arg1;
- (NSString *)sourceApplicationBundleIdentifierForContext:(VUIAppContext *)arg1;

@end
