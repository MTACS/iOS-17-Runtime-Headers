
@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest {
    PKPaymentPassAction * _action;
}

@property (nonatomic, retain) PKPaymentPassAction *action;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 passTypeIdentifier:(id)arg3 passSerialNumber:(id)arg4 appleAccountInformation:(id)arg5;
- (id)action;
- (void)setAction:(id)arg1;

@end
