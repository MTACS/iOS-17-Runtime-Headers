
@interface ISKVOProxy : NSObject {
    <ISKVOProxyDelegate> * _delegate;
    NSString * _identifier;
    NSArray * _keyPaths;
    id  _target;
}

@property (nonatomic) <ISKVOProxyDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithTarget:(id)arg1 keyPaths:(id)arg2 identifier:(id)arg3 delegate:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)startObservingTarget;
- (void)stopObservingTarget;

@end
