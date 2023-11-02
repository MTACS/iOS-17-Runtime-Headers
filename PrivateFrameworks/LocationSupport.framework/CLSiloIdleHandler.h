
@interface CLSiloIdleHandler : NSObject {
    id /* block */  _onIdle;
    id /* block */  _onResume;
}

@property (copy) id /* block */ onIdle;
@property (copy) id /* block */ onResume;

- (void).cxx_destruct;
- (id)initWithIdleHandler:(id /* block */)arg1 onResume:(id /* block */)arg2;
- (void)invalidate;
- (id /* block */)onIdle;
- (id /* block */)onResume;
- (void)setOnIdle:(id /* block */)arg1;
- (void)setOnResume:(id /* block */)arg1;

@end
