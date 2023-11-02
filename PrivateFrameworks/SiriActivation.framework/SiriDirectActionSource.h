
@interface SiriDirectActionSource : SiriActivationSource {
    <SiriDirectActionSourceDelegate> * _delegate;
}

@property (nonatomic) <SiriDirectActionSourceDelegate> *delegate;

- (void).cxx_destruct;
- (void)activateWithContext:(id)arg1;
- (void)activateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)canActivateChangedTo:(id)arg1;
- (void)configureConnection;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
