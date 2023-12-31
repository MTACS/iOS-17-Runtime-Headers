
@interface SUICKPFeedbackAdapter : NSObject <CRKFeedbackDelegateProxying, SearchUIFeedbackDelegate> {
    <CRKFeedbackDelegate> * _feedbackDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CRKFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(bool)arg2;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (id)feedbackDelegate;
- (id)feedbackListener;
- (void)presentViewController:(id)arg1;
- (void)presentViewControllerForCard:(id)arg1 animate:(bool)arg2;
- (void)setFeedbackDelegate:(id)arg1;
- (bool)shouldHandleCardSectionEngagement:(id)arg1;
- (void)willDismissViewController:(id)arg1;

@end
