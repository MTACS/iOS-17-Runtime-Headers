
@interface HMDMessageFilterChain : HMFObject {
    NSMutableArray * _filters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly, copy) NSArray *filters;

- (void).cxx_destruct;
- (bool)acceptMessage:(id)arg1 error:(id*)arg2;
- (void)addMessageFilter:(id)arg1;
- (id)filters;
- (id)init;
- (void)removeMessageFilter:(id)arg1;
- (void)resetConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldCloudSyncData;

@end
