
@interface ICDidMoveToWindowSpy : UIView {
    id /* block */  _handler;
    id  _owner;
}

@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) id owner;

- (void).cxx_destruct;
- (void)callHandler;
- (void)didMoveToWindow;
- (id /* block */)handler;
- (id)initWithOwner:(id)arg1 handler:(id /* block */)arg2;
- (id)owner;
- (void)scheduleCallHandler;

@end
