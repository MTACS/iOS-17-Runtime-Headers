
@interface _CATProxyWaitToken : NSObject {
    bool  _isExclusive;
    id  _resourceProxy;
    _Atomic bool  mFinished;
    NSObject<OS_dispatch_group> * mGroup;
}

@property (nonatomic, readonly) bool isExclusive;
@property (nonatomic, readonly) id resourceProxy;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithExclusive:(bool)arg1 group:(id)arg2;
- (void)invalidate;
- (bool)isExclusive;
- (void)notifyWithResourceProxy:(id)arg1;
- (id)resourceProxy;

@end
