
@interface PKPeerPaymentPreferencesResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentPreferences * _peerPaymentPreferences;
}

@property (nonatomic, readonly) PKPeerPaymentPreferences *peerPaymentPreferences;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)peerPaymentPreferences;

@end
