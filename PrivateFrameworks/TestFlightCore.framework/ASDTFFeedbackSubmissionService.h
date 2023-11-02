
@interface ASDTFFeedbackSubmissionService : NSObject <TFFeedbackSubmissionService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxNumberOfCommentSymbolsAllowed;
@property (nonatomic, readonly) unsigned long long maxNumberOfScreenshotsAllowed;
@property (readonly) Class superclass;

- (id)_serializeFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 error:(id*)arg3;
- (bool)_verifyDataSourceIsReadyForSubmission:(id)arg1 error:(id*)arg2;
- (bool)_verifyEmailIsValid:(id)arg1;
- (unsigned long long)maxNumberOfCommentSymbolsAllowed;
- (unsigned long long)maxNumberOfScreenshotsAllowed;
- (void)submitFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 completionHandler:(id /* block */)arg3;

@end
