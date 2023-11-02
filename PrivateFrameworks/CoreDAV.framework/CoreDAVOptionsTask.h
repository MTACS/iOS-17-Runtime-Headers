
@interface CoreDAVOptionsTask : CoreDAVTask

@property (nonatomic) <CoreDAVOptionsTaskDelegate> *delegate;

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end
