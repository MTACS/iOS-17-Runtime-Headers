
@interface ISKVOProxyManager : NSObject {
    NSMutableDictionary * _recordsByIdentifier;
    NSObject<OS_dispatch_queue> * _recordsQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)addProxyWithTarget:(id)arg1 queue:(id)arg2 keyPaths:(id)arg3 delegate:(id)arg4;
- (id)init;
- (void)removeProxyWithIdentifier:(id)arg1;

@end
