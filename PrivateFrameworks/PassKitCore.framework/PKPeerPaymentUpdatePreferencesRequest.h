
@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest {
    PKPeerPaymentPreferences * _peerPaymentPreferences;
}

@property (nonatomic, retain) PKPeerPaymentPreferences *peerPaymentPreferences;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPeerPaymentPreferences:(id)arg1;
- (id)peerPaymentPreferences;
- (void)setPeerPaymentPreferences:(id)arg1;

@end
