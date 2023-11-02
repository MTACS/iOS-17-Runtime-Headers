
@protocol TUNeighborhoodActivityConduitApprovalDelegate <NSObject>

@required

- (void)approveSplitSessionForConversation:(void *)arg1 requestedFromDevice:(void *)arg2 pullContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: TUConversation *, TUNearbyDeviceHandle *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelSplitSessionApproval;

@end
