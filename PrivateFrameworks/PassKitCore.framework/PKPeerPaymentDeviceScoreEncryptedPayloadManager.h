
@interface PKPeerPaymentDeviceScoreEncryptedPayloadManager : NSObject {
    unsigned long long  _deviceScoreEncryptedPayloadVersion;
    PKDeviceScorer * _deviceScorer;
    NSString * _endpointIdentifier;
    bool  _isScoringInProgress;
    PKODIServiceProviderAssessment * _odiServiceProviderAssessment;
    unsigned long long  _pendingDeviceScoreEncryptedPayloadVersion;
    unsigned long long  _quoteDestinationType;
    NSString * _recipientAddress;
    PKSecureElement * _secureElement;
}

@property (nonatomic) unsigned long long deviceScoreEncryptedPayloadVersion;

+ (id)keyForDeviceScoreEncryptedPayloadVersion:(unsigned long long)arg1 endpointIdentifier:(id)arg2 recipientAddress:(id)arg3 quoteDestinationType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)_createContextForDeviceScorer;
- (void)_cristalV1DeviceScoreWithKey:(id)arg1 completion:(id /* block */)arg2;
- (id)_errorForUnavailableDeviceScoreWithUnderlyingError:(id)arg1;
- (void)_setupDeviceScoreService;
- (unsigned long long)deviceScoreEncryptedPayloadVersion;
- (void)deviceScoreWithCompletion:(id /* block */)arg1;
- (id)initWithEndpointIdentifier:(id)arg1 recipientAddress:(id)arg2 deviceScoreEncryptedPayloadVersion:(unsigned long long)arg3 quoteDestinationType:(unsigned long long)arg4;
- (void)provideSessionFeedbackWithIngested:(bool)arg1;
- (void)setDeviceScoreEncryptedPayloadVersion:(unsigned long long)arg1;
- (void)updateAttributesWithEndpointIdentifier:(id)arg1 recipientAddress:(id)arg2 quoteDestinationType:(unsigned long long)arg3;

@end
