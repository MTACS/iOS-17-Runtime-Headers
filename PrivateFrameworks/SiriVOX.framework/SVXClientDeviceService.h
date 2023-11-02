
@interface SVXClientDeviceService : NSObject <SVXClientDeviceServicing, SVXClientServiceConsuming> {
    <SVXClientServiceProviding> * _clientServiceProvider;
    SVXDeviceSetupContext * _currentSetupContext;
    <SVXPerforming> * _performer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginSetupWithContext:(id)arg1;
- (void)_endSetup;
- (void)_prepareForSetupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateSetupContext;
- (void)beginSetupWithContext:(id)arg1;
- (void)clientServiceDidChange:(bool)arg1;
- (void)endSetup;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;
- (void)prepareForSetupWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
