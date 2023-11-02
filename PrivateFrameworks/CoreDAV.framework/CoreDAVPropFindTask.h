
@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (nonatomic) <CoreDAVTaskDelegate> *delegate;

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3;
- (id)requestBody;

@end
