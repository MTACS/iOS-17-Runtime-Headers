
@interface HMDAccessoryQueues : HMFObject {
    NSMutableDictionary * queues;
}

@property (nonatomic, retain) NSMutableDictionary *queues;

- (void).cxx_destruct;
- (bool)_inQueue:(id)arg1 queue:(id)arg2;
- (void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3;
- (int)countForQueue:(id)arg1;
- (bool)createQueue:(id)arg1;
- (void)enumerateQueue:(id)arg1 enumerateAccessory:(id /* block */)arg2;
- (id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2;
- (id)getContextForAccessory:(id)arg1;
- (id)init;
- (id)popAccessoryFromQueue:(id)arg1;
- (id)queues;
- (void)removeAccessory:(id)arg1;
- (void)setQueues:(id)arg1;
- (id)whichQueueForAccessory:(id)arg1;

@end
