
@interface WBSCookieTransferController : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_copyCookiesFromCookieStore:(id)arg1 matchingDomain:(id)arg2 intoFolderAtURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)copyCookiesFromFolderAtURL:(id)arg1 intoDataStore:(id)arg2;
- (void)copyCookiesFromWebView:(id)arg1 intoFolderAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;

@end
