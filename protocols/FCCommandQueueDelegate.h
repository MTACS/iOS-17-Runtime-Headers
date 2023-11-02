
@protocol FCCommandQueueDelegate <NSObject>

@optional

- (long long)qualityOfServiceForNextCommandInCommandQueue:(FCCommandQueue *)arg1;

@end
