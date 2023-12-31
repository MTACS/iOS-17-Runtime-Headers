
@interface FTAuthKitManager : NSObject {
    AKAppleIDSession * _akAppleIDSession;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)init;

@end
