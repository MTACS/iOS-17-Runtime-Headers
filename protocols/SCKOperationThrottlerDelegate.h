
@protocol SCKOperationThrottlerDelegate <NSObject>

@optional

- (void)operationThrottler:(void *)arg1 performAsyncOperationWithCompletion:(void *)arg2; // needs 2 arg types, found 6: <SCKOperationThrottler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)operationThrottlerPerformOperation:(id <SCKOperationThrottler>)arg1;

@end
