
@interface PKPaymentRemoteContentPassActionGroupRequest : PKPaymentWebServiceRequest {
    PKPaymentPassActionGroup * _actionGroup;
}

@property (nonatomic, retain) PKPaymentPassActionGroup *actionGroup;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 passTypeIdentifier:(id)arg3 passSerialNumber:(id)arg4 appleAccountInformation:(id)arg5;
- (id)actionGroup;
- (void)setActionGroup:(id)arg1;

@end
