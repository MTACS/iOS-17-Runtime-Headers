
@interface PKPrivacyDeviceAssessmentSendStateRequest : PKPaymentWebServiceRequest {
    NSNumber * _privacyUiState;
}

@property (nonatomic, copy) NSNumber *privacyUiState;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithPrivacyUiState:(id)arg1;
- (id)privacyUiState;
- (void)setPrivacyUiState:(id)arg1;

@end
