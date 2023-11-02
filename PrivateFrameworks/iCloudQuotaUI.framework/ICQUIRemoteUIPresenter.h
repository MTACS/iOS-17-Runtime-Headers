
@interface ICQUIRemoteUIPresenter : NSObject <ICQServerHookDelegate, RemoteUIControllerDelegate> {
    ACAccount * _account;
    NSString * _closeURL;
    NSSet * _dataclasses;
    <ICQUIRemoteUIPresenterDelegate> * _delegate;
    UIViewController * _presenter;
    RemoteUIController * _ruiController;
    RUIServerHookHandler * _serverHookHandler;
}

@property (nonatomic, retain) NSSet *dataclasses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUIRemoteUIPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attachServerHooks;
- (void)_configureTableRow:(id)arg1 withDataclass:(id)arg2;
- (void)_processObjectModel:(id)arg1;
- (void)_processTableRow:(id)arg1;
- (void)beginRUIFlowWithRequest:(id)arg1;
- (void)beginRUIFlowWithURL:(id)arg1;
- (id)dataclasses;
- (id)delegate;
- (void)dismissUpgradeFlowWithSuccess:(bool)arg1;
- (id)initWithAccount:(id)arg1 presenter:(id)arg2;
- (bool)isLiftUIFlow;
- (void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)setDataclasses:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
