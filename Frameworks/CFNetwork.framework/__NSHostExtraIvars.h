
@interface __NSHostExtraIvars : NSObject {
    NSObject<OS_dispatch_queue> * cacheAccessQueue;
    NSObject<OS_dispatch_queue> * callbackQueue;
    NSObject<OS_dispatch_queue> * resolveQueue;
    int  resolveType;
    bool  startedResolving;
    NSString * thingToResolve;
}

- (void)dealloc;
- (id)init;

@end
