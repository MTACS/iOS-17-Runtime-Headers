
@protocol TFFeedbackSubmissionService <NSObject>

@required

- (unsigned long long)maxNumberOfCommentSymbolsAllowed;
- (unsigned long long)maxNumberOfScreenshotsAllowed;
- (void)submitFeedbackForBundleId:(void *)arg1 withContentsOfDataSource:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSObject<TFFeedbackDataSource> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
