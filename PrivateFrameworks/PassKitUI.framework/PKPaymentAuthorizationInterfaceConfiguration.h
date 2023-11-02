
@interface PKPaymentAuthorizationInterfaceConfiguration : NSObject {
    <PKPaymentAuthorizationHostProtocol> * _host;
    <PKPaymentAuthorizationPresenter> * _presenter;
    NSString * _relevantPassID;
    unsigned long long  _supportedOrientations;
}

@property (nonatomic, readonly) <PKPaymentAuthorizationHostProtocol> *host;
@property (nonatomic, readonly) <PKPaymentAuthorizationPresenter> *presenter;
@property (nonatomic, readonly) NSString *relevantPassID;
@property (nonatomic, readonly) unsigned long long supportedOrientations;

- (void).cxx_destruct;
- (id)host;
- (id)initWithRelevantPassID:(id)arg1 presenter:(id)arg2 host:(id)arg3 supportedOrientations:(unsigned long long)arg4;
- (id)presenter;
- (id)relevantPassID;
- (unsigned long long)supportedOrientations;

@end
