
@interface CoreDAVHeadTask : CoreDAVTask

- (unsigned long long)cachePolicy;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end
