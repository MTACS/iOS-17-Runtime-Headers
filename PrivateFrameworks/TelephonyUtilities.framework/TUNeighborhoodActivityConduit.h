
@interface TUNeighborhoodActivityConduit : NSObject <TUNeighborhoodActivityConduitXPCClientDelegate> {
    TUNearbyDeviceHandle * _activeSplitSessionTV;
    <TUNeighborhoodActivityConduitApprovalDelegate> * _approvalDelegate;
    TUConversationManager * _conversationManager;
    NSMapTable * _delegates;
    NSMutableSet * _nearbyTVs;
    unsigned long long  _stateHandle;
    TUNearbySuggestion * _suggestion;
    TUNeighborhoodActivityConduitXPCClient * _xpcClient;
}

@property (nonatomic, retain) TUNearbyDeviceHandle *activeSplitSessionTV;
@property (nonatomic) <TUNeighborhoodActivityConduitApprovalDelegate> *approvalDelegate;
@property (nonatomic, readonly) TUConversationManager *conversationManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *nearbyTVDeviceHandles;
@property (nonatomic, readonly) NSDictionary *nearbyTVDevices;
@property (nonatomic, readonly) NSMutableSet *nearbyTVs;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, readonly) TUNearbySuggestion *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TUNeighborhoodActivityConduitXPCClient *xpcClient;

- (void).cxx_destruct;
- (id)_findConversationForUUID:(id)arg1;
- (void)_forEachDelegate:(id /* block */)arg1;
- (id)_osStateDictionary;
- (void)_requestInitialState;
- (id)activeSplitSessionTV;
- (void)addDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)approvalDelegate;
- (void)approveSplitSessionForConversation:(id)arg1 device:(id)arg2 pullContext:(long long)arg3 completion:(id /* block */)arg4;
- (void)cancelSplitSessionApproval;
- (void)connectionEstablishedForClient:(id)arg1;
- (void)connectionLostForClient:(id)arg1;
- (id)conversationManager;
- (void)dealloc;
- (id)delegates;
- (void)disconnectTVDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)handoffConversation:(id)arg1 toTVDevice:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithConversationManager:(id)arg1;
- (void)inviteTVDevice:(id)arg1 toConversation:(id)arg2 completion:(id /* block */)arg3;
- (bool)nearbyTVDevice:(id)arg1 isCapableOfHandoffForConversation:(id)arg2;
- (id)nearbyTVDeviceHandles;
- (id)nearbyTVDevices;
- (id)nearbyTVs;
- (void)pullConversation:(id)arg1 fromTVDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)removeDelegate:(id)arg1;
- (void)respondToSuggestionWithResult:(id)arg1 completion:(id /* block */)arg2;
- (void)setActiveSplitSessionTV:(id)arg1;
- (void)setApprovalDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setSuggestedTVDeviceName:(id)arg1 completion:(id /* block */)arg2;
- (void)setSuggestion:(id)arg1;
- (void)splitSessionEnded:(id)arg1;
- (void)splitSessionStarted:(id)arg1;
- (unsigned long long)stateHandle;
- (id)suggestion;
- (void)suggestionUpdated:(id)arg1;
- (void)tvDeviceAppeared:(id)arg1;
- (void)tvDeviceDisappeared:(id)arg1;
- (id)xpcClient;

@end
