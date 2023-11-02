
@protocol SASRequestOptionsBuilderDataSource <SASRequestOptionsBuilderDataSourceForTesting>

@required

- (unsigned long long)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 currentLockStateForActivation:(SASActivationRequest *)arg2;
- (bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isAcousticIdAllowedWithActiviation:(SASActivationRequest *)arg2;
- (bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isPredictedRecordRouteIsZLLWithActiviation:(SASActivationRequest *)arg2;
- (bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isRequestInitialWithActiviation:(SASActivationRequest *)arg2;
- (bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(SASActivationRequest *)arg2;
- (NSString *)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 uiPresentationIdentifierWithActivation:(SASActivationRequest *)arg2 activationPresentation:(long long)arg3;

@end
