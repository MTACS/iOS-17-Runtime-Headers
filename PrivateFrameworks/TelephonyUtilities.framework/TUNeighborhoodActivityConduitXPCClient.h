
@interface TUNeighborhoodActivityConduitXPCClient : NSObject <TUNeighborhoodActivityConduitXPCClient> {
    <TUNeighborhoodActivityConduitXPCClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUNeighborhoodActivityConduitXPCClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)allowedXPCClasses;
+ (id)neighborhoodActivityClientXPCInterface;
+ (id)neighborhoodActivityServerXPCInterface;

- (void).cxx_destruct;
- (void)activeSplitSessionTVDeviceWithCompletion:(id /* block */)arg1;
- (void)approveSplitSessionForConversation:(id)arg1 requestedFromDevice:(id)arg2 pullContext:(long long)arg3 completion:(id /* block */)arg4;
- (void)cancelSplitSessionApproval;
- (void)dealloc;
- (id)delegate;
- (void)disconnectTVDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)ensureConnection;
- (void)handoffConversation:(id)arg1 toTVDevice:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)inviteTVDevice:(id)arg1 toConversationWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)nearbyTVDevicesWithCompletion:(id /* block */)arg1;
- (void)pullConversation:(id)arg1 fromTVDevice:(id)arg2 completion:(id /* block */)arg3;
- (id)queue;
- (void)registerApprovalClientEnabled:(bool)arg1;
- (void)respondToSuggestionWithResult:(id)arg1 completion:(id /* block */)arg2;
- (id)server;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestedTVDeviceName:(id)arg1 completion:(id /* block */)arg2;
- (void)setToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (oneway void)splitSessionEnded:(id)arg1;
- (oneway void)splitSessionStarted:(id)arg1;
- (oneway void)suggestionUpdated:(id)arg1;
- (void)suggestionWithCompletion:(id /* block */)arg1;
- (int)token;
- (oneway void)tvDeviceAppeared:(id)arg1;
- (oneway void)tvDeviceDisappeared:(id)arg1;
- (id)xpcConnection;

@end
