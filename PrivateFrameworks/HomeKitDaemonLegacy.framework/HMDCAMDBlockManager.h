
@interface HMDCAMDBlockManager : NSObject {
    NSMutableDictionary * _blockHandlerMap;
    NSObject<OS_dispatch_queue> * _blockQueue;
    HMDCAMDEmbeddedDeviceService * _service;
}

- (void).cxx_destruct;
- (void)addBlock:(id)arg1 forKey:(id)arg2;
- (void)addBlockNoCopy:(id)arg1 forKey:(id)arg2;
- (id)blockForKey:(id)arg1;
- (unsigned long long)count;
- (id)forwardingBlockWithArgumentCount:(unsigned long long)arg1 forKey:(id)arg2;
- (id)initWithService:(id)arg1;
- (void)invokeForwardedBlockWithArguments:(id)arg1 forKey:(id)arg2;
- (id)keyForBlock:(id)arg1;
- (void)removeBlock:(id)arg1;
- (void)removeBlockForKey:(id)arg1;

@end
