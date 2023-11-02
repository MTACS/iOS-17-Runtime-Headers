
@interface ASDJobSchedulerRequest : ASDEphemeralRequest

+ (long long)requestType;

- (void)findNextJobsWithCompletionBlock:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1;

@end
