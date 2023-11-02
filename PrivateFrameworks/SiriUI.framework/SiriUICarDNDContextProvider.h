
@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider> {
    <SiriUICarDNDContextProviderDelegate> * _delegate;
    SADeviceCarDNDHintContext * _hintContext;
}

@property (nonatomic) <SiriUICarDNDContextProviderDelegate> *delegate;
@property (setter=_setHintContext:, nonatomic, copy) SADeviceCarDNDHintContext *hintContext;

- (void).cxx_destruct;
- (void)_setHintContext:(id)arg1;
- (bool)allowContextProvider:(id)arg1;
- (id)delegate;
- (id)getCurrentContext;
- (id)hintContext;
- (void)setDelegate:(id)arg1;

@end
