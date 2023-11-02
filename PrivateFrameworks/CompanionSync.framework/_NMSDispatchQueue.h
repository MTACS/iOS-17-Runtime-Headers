
@interface _NMSDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> * _q;
    _Atomic bool  _r;
}

@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 attributes:(id)arg2 target:(id)arg3;
- (bool)isSuspended;
- (void)resume;
- (void)suspend;
- (void)sync:(id /* block */)arg1;

@end
