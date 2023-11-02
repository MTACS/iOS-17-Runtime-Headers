
@protocol HMDDataStreamBulkSendListener <NSObject>

@required

- (void)accessory:(id)arg1 didCloseDataStreamWithError:(NSError *)arg2;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id <HMDDataStreamBulkSendSessionCandidate>)arg2;
- (void)accessoryDidStartListening:(id)arg1;

@end
