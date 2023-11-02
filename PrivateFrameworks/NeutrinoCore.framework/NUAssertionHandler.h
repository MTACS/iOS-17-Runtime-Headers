
@interface NUAssertionHandler : NSAssertionHandler {
    <NUAssertionPolicyHandler> * _policy;
}

@property (retain) <NUAssertionPolicyHandler> *policy;

+ (id)currentHandler;
+ (bool)runningUnitTests;

- (void).cxx_destruct;
- (void)continueAfterAssertInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 currentlyExecutingJobName:(id)arg4 description:(id)arg5 arguments:(char *)arg6;
- (id)defaultPolicy;
- (id)defaultTestingPolicy;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 currentlyExecutingJobName:(id)arg4 description:(id)arg5;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 currentlyExecutingJobName:(id)arg4 description:(id)arg5 arguments:(char *)arg6;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 currentlyExecutingJobName:(id)arg5 description:(id)arg6;
- (id)init;
- (id)newAssertionInfoInMethod:(SEL)arg1 object:(id)arg2 function:(id)arg3 file:(id)arg4 lineNumber:(unsigned long long)arg5 currentlyExecutingJobName:(id)arg6 description:(id)arg7 arguments:(char *)arg8;
- (id)policy;
- (void)setPolicy:(id)arg1;

@end
