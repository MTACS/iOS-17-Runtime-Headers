
@protocol TUNeighborhoodActivityConduitXPCClientDelegate <NSObject>

@required

- (void)connectionEstablishedForClient:(TUNeighborhoodActivityConduitXPCClient *)arg1;
- (void)connectionLostForClient:(TUNeighborhoodActivityConduitXPCClient *)arg1;
- (void)splitSessionEnded:(TUNearbyDeviceHandle *)arg1;
- (void)splitSessionStarted:(TUNearbyDeviceHandle *)arg1;
- (void)tvDeviceAppeared:(TUNearbyDeviceHandle *)arg1;
- (void)tvDeviceDisappeared:(TUNearbyDeviceHandle *)arg1;

@optional

- (void)approveSplitSessionForConversation:(void *)arg1 device:(void *)arg2 pullContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, TUNearbyDeviceHandle *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelSplitSessionApproval;
- (void)suggestionUpdated:(TUNearbySuggestion *)arg1;

@end
