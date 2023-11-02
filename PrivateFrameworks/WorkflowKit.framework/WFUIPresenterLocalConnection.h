
@interface WFUIPresenterLocalConnection : NSObject <WFUIPresenterConnection> {
    <WFUIPresenterInterface> * _presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <WFUIPresenterHostInterface> *host;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) <WFUIPresenterInterface> *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPresenter:(id)arg1;
- (bool)isConnected;
- (id)presenter;
- (id)presenterWithErrorHandler:(id /* block */)arg1;
- (id)synchronousPresenterWithErrorHandler:(id /* block */)arg1;

@end
