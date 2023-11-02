
@interface BlastDoorBasicTextMessage : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  basicTextMessage;
}

@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long encryptionType;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) unsigned long long groupParticipantVersion;
@property (nonatomic, readonly) unsigned long long groupProtocolVersion;
@property (nonatomic, readonly) bool has_groupParticipantVersion;
@property (nonatomic, readonly) bool has_groupProtocolVersion;
@property (nonatomic, readonly) BlastDoorBasicTextMessageMessageTypeWrapper *messageSubType;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSString *threadIdentifierGUID;

- (void).cxx_destruct;
- (id)currentGroupName;
- (id)description;
- (long long)encryptionType;
- (id)groupID;
- (unsigned long long)groupParticipantVersion;
- (unsigned long long)groupProtocolVersion;
- (bool)has_groupParticipantVersion;
- (bool)has_groupProtocolVersion;
- (id)init;
- (id)messageSubType;
- (id)metadata;
- (id)threadIdentifierGUID;

@end
