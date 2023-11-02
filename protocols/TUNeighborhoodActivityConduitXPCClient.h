
@protocol TUNeighborhoodActivityConduitXPCClient <NSObject>

@required

- (oneway void)splitSessionEnded:(TUNearbyDeviceHandle *)arg1;
- (oneway void)splitSessionStarted:(TUNearbyDeviceHandle *)arg1;
- (oneway void)suggestionUpdated:(TUNearbySuggestion *)arg1;
- (oneway void)tvDeviceAppeared:(TUNearbyDeviceHandle *)arg1;
- (oneway void)tvDeviceDisappeared:(TUNearbyDeviceHandle *)arg1;

@optional

- (void)approveSplitSessionForConversation:(void *)arg1 requestedFromDevice:(void *)arg2 pullContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, TUNearbyDeviceHandle *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelSplitSessionApproval;

@end
