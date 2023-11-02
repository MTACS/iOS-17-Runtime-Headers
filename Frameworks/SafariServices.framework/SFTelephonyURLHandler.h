
@interface SFTelephonyURLHandler : NSObject {
    NSMutableSet * _pendingRequests;
}

@property (nonatomic, retain) NSMutableSet *pendingRequests;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserverForRequest:(id)arg1;
- (id)init;
- (bool)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)pendingRequests;
- (void)removeObserverForRequest:(id)arg1;
- (void)setPendingRequests:(id)arg1;

@end
