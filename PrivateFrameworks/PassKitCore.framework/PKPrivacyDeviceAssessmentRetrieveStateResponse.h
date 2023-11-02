
@interface PKPrivacyDeviceAssessmentRetrieveStateResponse : PKPaymentWebServiceResponse {
    NSNumber * _privacyUiState;
}

@property (nonatomic, retain) NSNumber *privacyUiState;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)privacyUiState;
- (void)setPrivacyUiState:(id)arg1;

@end
