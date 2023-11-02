
@interface BCSCoalesceHelper : NSObject <BCSCoalesceHelperProtocol> {
    NSObject<OS_dispatch_queue> * _coalesceHelperDispatchQueue;
    NSMutableDictionary * _coalesceObjectPool;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dequeueCoalesceObjectsForCoalesceKey:(id)arg1;
- (void)enqueueCoalesceObject:(id)arg1 isDuplicateRequest:(bool*)arg2;
- (id)initWithQOSClass:(unsigned int)arg1;

@end
