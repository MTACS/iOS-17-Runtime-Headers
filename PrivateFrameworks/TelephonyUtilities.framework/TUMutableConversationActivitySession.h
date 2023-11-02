
@interface TUMutableConversationActivitySession : TUConversationActivitySession

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSSet *activeRemoteParticipants;
@property (nonatomic, retain) TUConversationActivity *activity;
@property (nonatomic) unsigned long long applicationState;
@property (nonatomic) unsigned long long distributionCount;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) bool isFirstJoin;
@property (nonatomic) bool isLightweightPrimaryInitiated;
@property (nonatomic) bool isLocallyInitiated;
@property (getter=isPermittedToJoin, nonatomic) bool permittedToJoin;
@property (nonatomic, retain) NSString *persistentSceneIdentifier;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) TUHandle *terminatingHandle;
@property (nonatomic, retain) NSDate *timestamp;
@property (getter=isUsingAirplay, nonatomic) bool usingAirplay;

@end
