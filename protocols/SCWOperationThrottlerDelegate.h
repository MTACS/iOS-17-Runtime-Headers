
@protocol SCWOperationThrottlerDelegate <NSObject>

@optional

- (void)operationThrottler:(void *)arg1 performAsyncOperationWithCompletion:(void *)arg2; // needs 2 arg types, found 6: <SCWOperationThrottler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)operationThrottlerPerformOperation:(id <SCWOperationThrottler>)arg1;

@end
