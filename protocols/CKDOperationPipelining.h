
@protocol CKDOperationPipelining <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (NSString *)pipeliningDescription;
- (void)setCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
