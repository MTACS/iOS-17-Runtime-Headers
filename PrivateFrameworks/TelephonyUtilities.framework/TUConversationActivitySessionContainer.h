
@interface TUConversationActivitySessionContainer : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSSet * _activeRemoteParticipants;
    NSSet * _activitySessions;
    NSUUID * _groupUUID;
    TUHandle * _initiator;
    TUConversationMember * _localMember;
    unsigned long long  _localParticipantIdentifier;
    NSSet * _remoteMembers;
    long long  _state;
    TUConversationUnreliableMessengerConfig * _unreliableMessengerConfig;
    TUConversationVirtualParticipantConfig * _virtualParticipantConfig;
    NSSet * _virtualParticipants;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, copy) NSSet *activeRemoteParticipants;
@property (nonatomic, copy) NSSet *activitySessions;
@property (nonatomic, retain) NSUUID *groupUUID;
@property (nonatomic, retain) TUHandle *initiator;
@property (nonatomic, retain) TUConversationMember *localMember;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (nonatomic, copy) NSSet *remoteMembers;
@property (nonatomic) long long state;
@property (nonatomic, copy) TUConversationUnreliableMessengerConfig *unreliableMessengerConfig;
@property (nonatomic, copy) TUConversationVirtualParticipantConfig *virtualParticipantConfig;
@property (nonatomic, copy) NSSet *virtualParticipants;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activeRemoteParticipants;
- (id)activitySessions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupUUID;
- (id)initWithCoder:(id)arg1;
- (id)initiator;
- (id)localMember;
- (unsigned long long)localParticipantIdentifier;
- (id)remoteMembers;
- (void)setActiveRemoteParticipants:(id)arg1;
- (void)setActivitySessions:(id)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setInitiator:(id)arg1;
- (void)setLocalMember:(id)arg1;
- (void)setLocalParticipantIdentifier:(unsigned long long)arg1;
- (void)setRemoteMembers:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUnreliableMessengerConfig:(id)arg1;
- (void)setVirtualParticipantConfig:(id)arg1;
- (void)setVirtualParticipants:(id)arg1;
- (long long)state;
- (id)unreliableMessengerConfig;
- (id)virtualParticipantConfig;
- (id)virtualParticipants;

@end
