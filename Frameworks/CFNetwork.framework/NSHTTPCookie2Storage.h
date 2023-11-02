
@interface NSHTTPCookie2Storage : NSObject {
    id /* block */  _defaultNotificationHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMemoryHTTPCookie2Storage * memoryStore;
    NSPersistentHTTPCookie2Storage * persistentStore;
}

+ (id)sharedNSHTTPCookie2Storage;

- (void).cxx_destruct;
- (void)deleteAllCookiesWithCompletionHandler:(id /* block */)arg1;
- (void)deleteCookie:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)deleteCookiesWithFilter:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllCookiesWithCompletionHandler:(id /* block */)arg1;
- (void)getCookiesWithFilter:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)identifyingData;
- (id)init;
- (id)initInNSMemoryHTTPCookie2Storage;
- (id)initWithIdentifyingData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)setCookie:(id)arg1 withFilter:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCookies:(id)arg1 withFilter:(id)arg2 completionHandler:(id /* block */)arg3;

@end
