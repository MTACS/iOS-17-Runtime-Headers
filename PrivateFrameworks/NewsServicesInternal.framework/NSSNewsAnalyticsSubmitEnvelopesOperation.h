
@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation {
    <FCNewsAppConfigurationManager><FCCoreConfigurationManager> * _appConfigurationManager;
    NSArray * _envelopes;
    id /* block */  _handoffCompletion;
    id /* block */  _submissionCompletion;
}

@property (nonatomic, retain) <FCNewsAppConfigurationManager><FCCoreConfigurationManager> *appConfigurationManager;
@property (nonatomic, copy) NSArray *envelopes;
@property (nonatomic, copy) id /* block */ handoffCompletion;
@property (nonatomic, copy) id /* block */ submissionCompletion;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)envelopes;
- (id /* block */)handoffCompletion;
- (id)init;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setEnvelopes:(id)arg1;
- (void)setHandoffCompletion:(id /* block */)arg1;
- (void)setSubmissionCompletion:(id /* block */)arg1;
- (id /* block */)submissionCompletion;
- (bool)validateOperation;

@end
