
@protocol MCMResultPromise <NSObject>

@required

- (bool)complete;
- (void)completeWithResult:(id <MCMResult>)arg1;
- (<MCMResult> *)result;

@end
