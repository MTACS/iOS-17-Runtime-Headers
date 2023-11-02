
@interface BlastDoorGroupContext : NSObject {
    void groupContext;
}

@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) unsigned long long groupParticipantVersion;
@property (nonatomic, readonly) unsigned long long groupProtocolVersion;
@property (nonatomic, readonly) bool has_groupParticipantVersion;
@property (nonatomic, readonly) bool has_groupProtocolVersion;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)currentGroupName;
- (id)description;
- (id)groupID;
- (unsigned long long)groupParticipantVersion;
- (unsigned long long)groupProtocolVersion;
- (bool)has_groupParticipantVersion;
- (bool)has_groupProtocolVersion;
- (id)init;
- (id)participantDestinationIdentifiers;

@end
