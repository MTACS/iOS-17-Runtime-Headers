
@protocol FCStreaming <NSObject>

@required

- (<FCOperationCanceling> *)fetchMoreResultsWithLimit:(void *)arg1 qualityOfService:(void *)arg2 callbackQueue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: unsigned long long, long long, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)isFinished;

@end
