
@interface _XRLazyKVOBlockToken : NSObject <XRLazyKVOResponder> {
    id /* block */  _block;
    id  _object;
    id  _observer;
}

@property (nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)handleLazyKVOUpdate:(id)arg1;
- (id)initWithObject:(id)arg1 observer:(id)arg2;
- (void)setBlock:(id /* block */)arg1;

@end
