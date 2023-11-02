
@protocol BMComputeXPCPublisherServerDelegate

@required

- (void)publisherServer:(BMComputeXPCPublisherServer *)arg1 didAddSubscription:(BMComputeXPCSubscription *)arg2;
- (void)publisherServer:(BMComputeXPCPublisherServer *)arg1 didRemoveSubscription:(BMComputeXPCSubscription *)arg2;

@end
