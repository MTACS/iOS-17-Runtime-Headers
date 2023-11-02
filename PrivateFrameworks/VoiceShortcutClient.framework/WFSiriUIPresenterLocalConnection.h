
@interface WFSiriUIPresenterLocalConnection : NSObject <WFSiriUIPresenterConnection> {
    <WFSiriUIPresenterInterface> * _presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WFSiriUIPresenterInterface> *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPresenter:(id)arg1;
- (id)presenter;
- (id)presenterWithErrorHandler:(id /* block */)arg1;

@end
