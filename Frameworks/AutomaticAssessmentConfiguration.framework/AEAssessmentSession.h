
@interface AEAssessmentSession : NSObject <AECAssessmentSessionWrapperDelegate> {
    <AEAssessmentSessionDelegate> * _delegate;
    AECAssessmentSessionWrapper * _sessionWrapper;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) AEAssessmentConfiguration *configuration;
@property (nonatomic) <AEAssessmentSessionDelegate> *delegate;

- (void).cxx_destruct;
- (void)__updateToConfiguration:(id)arg1;
- (void)assessmentSessionWrapper:(id)arg1 failedToBeginWithError:(id)arg2;
- (void)assessmentSessionWrapper:(id)arg1 failedToUpdateToConfigurationWrapper:(id)arg2 error:(id)arg3;
- (void)assessmentSessionWrapper:(id)arg1 wasInterruptedWithError:(id)arg2;
- (void)assessmentSessionWrapperDidBegin:(id)arg1;
- (void)assessmentSessionWrapperDidEnd:(id)arg1;
- (void)assessmentSessionWrapperDidUpdate:(id)arg1;
- (void)begin;
- (id)configuration;
- (id)delegate;
- (void)end;
- (id)initWithConfiguration:(id)arg1;
- (bool)isActive;
- (void)setDelegate:(id)arg1;
- (void)updateToConfiguration:(id)arg1;

@end
