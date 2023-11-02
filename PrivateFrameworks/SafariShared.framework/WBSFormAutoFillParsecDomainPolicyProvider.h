
@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider> {
    <WBSCrowdsourcedFeedbackAllowList> * _feedbackAllowList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(id /* block */)arg1;
- (id)initWithFeedbackAllowList:(id)arg1;
- (void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2;

@end
