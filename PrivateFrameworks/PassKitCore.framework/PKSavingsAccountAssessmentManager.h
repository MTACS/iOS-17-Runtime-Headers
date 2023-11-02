
@interface PKSavingsAccountAssessmentManager : NSObject {
    PKODIServiceProviderAssessment * _odiServiceProviderAssessment;
    long long  _type;
}

- (void).cxx_destruct;
- (void)_restartODIAssessment;
- (id)_serviceProviderIdentifierForAssessmentType;
- (id)initWithType:(long long)arg1;
- (void)provideSessionFeedbackDiscarded;
- (void)provideSessionFeedbackIngested;
- (long long)type;
- (void)updateAssessmentType:(long long)arg1;
- (void)waitForAssessmentWithCompletion:(id /* block */)arg1;

@end
