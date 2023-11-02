
@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol> {
    <AKAuthorizationUIProvider> * _uiProvider;
}

@property (nonatomic, retain) <AKAuthorizationUIProvider> *uiProvider;

- (void).cxx_destruct;
- (void)dealloc;
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setUiProvider:(id)arg1;
- (id)uiProvider;

@end
