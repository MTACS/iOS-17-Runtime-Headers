
@protocol PHMediaRequestThreadingOptions <NSObject>

@required

- (bool)isSynchronous;
- (NSObject<OS_dispatch_queue> *)resultHandlerQueue;

@end
