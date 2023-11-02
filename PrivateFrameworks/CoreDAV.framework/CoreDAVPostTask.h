
@interface CoreDAVPostTask : CoreDAVPostOrPutTask

@property (nonatomic) <CoreDAVTaskDelegate> *delegate;

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;

@end
