
@protocol BMComputePublisher <NSObject>

@required

- (void)subscribe:(BMComputeXPCSubscription *)arg1;
- (void)unsubscribeWithIdentifier:(NSString *)arg1;

@end
