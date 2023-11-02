
@protocol BNPresentableQueueDelegate <NSObject>

@required

- (void)presentableQueue:(BNPresentableQueue *)arg1 didDequeuePresentableWithPendingIdentifier:(NSUUID *)arg2;

@end
