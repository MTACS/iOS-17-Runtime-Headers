
@interface ACCBLEPairingDelegateReference : NSObject {
    <ACCBLEPairingProviderProtocol> * _delegate;
    ACCBLEPairingProvider * _provider;
}

@property (nonatomic) <ACCBLEPairingProviderProtocol> *delegate;
@property (nonatomic) ACCBLEPairingProvider *provider;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 provider:(id)arg2;
- (id)provider;
- (void)setDelegate:(id)arg1;
- (void)setProvider:(id)arg1;

@end
