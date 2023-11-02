
@interface TKSharedResourceSlot : NSObject {
    id /* block */  _createObjectBlock;
    NSObject<OS_dispatch_queue> * _idleQueue;
    double  _idleTimeout;
    NSObject<OS_dispatch_source> * _idleTimer;
    NSString * _name;
    id  _object;
    id /* block */  _objectDestroyedBlock;
    TKSharedResource * _resource;
}

@property (nonatomic, copy) id /* block */ createObjectBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *idleQueue;
@property (nonatomic) double idleTimeout;
@property (nonatomic, copy) id /* block */ objectDestroyedBlock;

- (void).cxx_destruct;
- (id /* block */)createObjectBlock;
- (void)dealloc;
- (id)description;
- (void)destroyObject;
- (id)idleQueue;
- (double)idleTimeout;
- (id)initWithName:(id)arg1;
- (id)object;
- (id /* block */)objectDestroyedBlock;
- (void)releaseResource;
- (id)resourceWithError:(id*)arg1;
- (void)setCreateObjectBlock:(id /* block */)arg1;
- (void)setIdleQueue:(id)arg1;
- (void)setIdleTimeout:(double)arg1;
- (void)setObjectDestroyedBlock:(id /* block */)arg1;

@end
