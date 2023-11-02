
@interface GEORPFeedbackRequester : GEOServiceRequester

+ (id)sharedInstance;

- (id)_requestConfigForRequest:(id)arg1;
- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(id /* block */)arg3;

@end
