
@interface HAP2Cancelable : HAP2LoggingObject <HAP2Cancelable> {
    id /* block */  _block;
    _Atomic bool  _called;
}

@property (nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cancelableWithBlock:(id /* block */)arg1;
+ (id)ignore;
+ (id)new;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancelWithError:(id)arg1;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
