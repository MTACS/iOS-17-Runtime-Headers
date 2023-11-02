
@protocol AMSURLProtocolDelegate <NSObject>

@optional

- (void)AMSURLSession:(void *)arg1 handleAuthenticateRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSURLSession *, AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)AMSURLSession:(void *)arg1 handleDialogRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSURLSession *, AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (bool)AMSURLSession:(AMSURLSession *)arg1 shouldFailWithServerError:(NSError *)arg2;
- (bool)AMSURLSession:(AMSURLSession *)arg1 shouldHandleAuthenticationForAccount:(ACAccount *)arg2 dialogDictionary:(NSDictionary *)arg3;
- (bool)AMSURLSession:(AMSURLSession *)arg1 shouldHandleDialogDictionary:(NSDictionary *)arg2;
- (void)AMSURLSession:(void *)arg1 task:(void *)arg2 handleAuthenticateRequest:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AMSURLSession *, NSURLSessionTask *, AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)AMSURLSession:(void *)arg1 task:(void *)arg2 handleDialogRequest:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AMSURLSession *, NSURLSessionTask *, AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)AMSURLSession:(void *)arg1 task:(void *)arg2 handleEngagementRequest:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AMSURLSession *, NSURLSessionTask *, AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*
- (bool)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 shouldFailWithServerError:(NSError *)arg3;
- (NSString *)presentingSceneBundleIdentifier;
- (NSString *)presentingSceneIdentifier;
- (void)reportMetricsForContext:(AMSMetricsLoadURLContext *)arg1;

@end
