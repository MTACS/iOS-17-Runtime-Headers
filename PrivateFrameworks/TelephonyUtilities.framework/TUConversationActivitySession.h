
@interface TUConversationActivitySession : NSObject <CPLaunchableActivitySession, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSSet * _activeRemoteParticipants;
    TUConversationActivity * _activity;
    unsigned long long  _applicationState;
    NSNumber * _clientAudioSessionID;
    unsigned long long  _distributionCount;
    NSXPCListenerEndpoint * _endpoint;
    bool  _isFirstJoin;
    bool  _isLightweightPrimaryInitiated;
    bool  _isLocallyInitiated;
    NSDate * _localCreationTimestamp;
    NSDate * _permittedJoinTimestamp;
    bool  _permittedToJoin;
    NSString * _persistentSceneIdentifier;
    unsigned long long  _state;
    TUHandle * _terminatingHandle;
    NSDate * _timestamp;
    bool  _usingAirplay;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, readonly) NSSet *activeRemoteParticipants;
@property (nonatomic, readonly) TUConversationActivity *activity;
@property (nonatomic, retain) TUConversationActivity *activity;
@property (nonatomic, readonly) unsigned long long applicationState;
@property (nonatomic, retain) NSNumber *clientAudioSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long distributionCount;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFirstJoin;
@property (nonatomic) bool isLightweightPrimaryInitiated;
@property (nonatomic) bool isLocallyInitiated;
@property (nonatomic, retain) NSDate *localCreationTimestamp;
@property (nonatomic, retain) NSDate *permittedJoinTimestamp;
@property (getter=isPermittedToJoin, nonatomic) bool permittedToJoin;
@property (nonatomic, readonly) NSString *persistentSceneIdentifier;
@property (nonatomic, retain) NSString *persistentSceneIdentifier;
@property (nonatomic, readonly) bool shouldShowEndActivity;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) TUHandle *terminatingHandle;
@property (nonatomic, retain) NSDate *timestamp;
@property (getter=isUsingAirplay, nonatomic) bool usingAirplay;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activeRemoteParticipants;
- (id)activity;
- (unsigned long long)applicationState;
- (id)clientAudioSessionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)distributionCount;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (unsigned long long)hash;
- (id)initWithActivity:(id)arg1 locallyInitiated:(bool)arg2 timestamp:(id)arg3 isFirstJoin:(bool)arg4;
- (id)initWithActivity:(id)arg1 state:(unsigned long long)arg2 endpoint:(id)arg3 locallyInitiated:(bool)arg4 timestamp:(id)arg5 isFirstJoin:(bool)arg6;
- (id)initWithActivity:(id)arg1 state:(unsigned long long)arg2 uuid:(id)arg3 endpoint:(id)arg4 locallyInitiated:(bool)arg5 timestamp:(id)arg6 isFirstJoin:(bool)arg7 activeRemoteParticipants:(id)arg8 applicationState:(unsigned long long)arg9;
- (id)initWithActivity:(id)arg1 uuid:(id)arg2 locallyInitiated:(bool)arg3 timestamp:(id)arg4 isFirstJoin:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithTUConversationActivitySession:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationActivitySession:(id)arg1;
- (bool)isFirstJoin;
- (bool)isLightweightPrimaryInitiated;
- (bool)isLocallyInitiated;
- (bool)isPermittedToJoin;
- (bool)isUsingAirplay;
- (void)launchApplicationWithForcedURL:(id)arg1 completion:(id /* block */)arg2;
- (id)localCreationTimestamp;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)permittedJoinTimestamp;
- (id)persistentSceneIdentifier;
- (id)publicCopy;
- (void)setActivity:(id)arg1;
- (void)setClientAudioSessionID:(id)arg1;
- (void)setDistributionCount:(unsigned long long)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setIsLightweightPrimaryInitiated:(bool)arg1;
- (void)setIsLocallyInitiated:(bool)arg1;
- (void)setLocalCreationTimestamp:(id)arg1;
- (void)setPermittedJoinTimestamp:(id)arg1;
- (void)setPermittedToJoin:(bool)arg1;
- (void)setPersistentSceneIdentifier:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTerminatingHandle:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUsingAirplay:(bool)arg1;
- (unsigned long long)state;
- (id)terminatingHandle;
- (id)timestamp;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (bool)shouldShowEndActivity;

@end
