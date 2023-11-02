
@interface BlastDoorTextMessage : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  textMessage;
}

@property (nonatomic, readonly) NSString *availabilityVerificationRecipientChannelIDPrefix;
@property (nonatomic, readonly) NSString *availabilityVerificationRecipientEncryptionValidationToken;
@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long encryptionType;
@property (nonatomic, readonly) NSString *expressiveSendStyleIdentifier;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) unsigned long long groupParticipantVersion;
@property (nonatomic, readonly) unsigned long long groupPhotoCreationTime;
@property (nonatomic, readonly) unsigned long long groupProtocolVersion;
@property (nonatomic, readonly) bool has_groupParticipantVersion;
@property (nonatomic, readonly) bool has_groupPhotoCreationTime;
@property (nonatomic, readonly) bool has_groupProtocolVersion;
@property (nonatomic, readonly) bool has_replicationSourceID;
@property (nonatomic, readonly) bool isAutoReply;
@property (nonatomic, readonly) bool isCritical;
@property (nonatomic, readonly) bool isExpirable;
@property (nonatomic, readonly) bool isSOS;
@property (nonatomic, readonly) BlastDoorTextMessageMessageTypeWrapper *messageSubType;
@property (nonatomic, readonly) BlastDoorTextMessage_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorNicknameInformation *nicknameInformation;
@property (nonatomic, readonly) long long replicationSourceID;
@property (nonatomic, readonly) NSUUID *replyToGUID;
@property (nonatomic, readonly) NSString *threadIdentifierGUID;
@property (nonatomic, readonly) NSString *threadOriginatorFallbackHash;
@property (nonatomic, readonly) NSString *truncatedNicknameRecordKey;

- (void).cxx_destruct;
- (id)availabilityVerificationRecipientChannelIDPrefix;
- (id)availabilityVerificationRecipientEncryptionValidationToken;
- (id)currentGroupName;
- (id)description;
- (long long)encryptionType;
- (id)expressiveSendStyleIdentifier;
- (id)groupID;
- (unsigned long long)groupParticipantVersion;
- (unsigned long long)groupPhotoCreationTime;
- (unsigned long long)groupProtocolVersion;
- (bool)has_groupParticipantVersion;
- (bool)has_groupPhotoCreationTime;
- (bool)has_groupProtocolVersion;
- (bool)has_replicationSourceID;
- (id)init;
- (bool)isAutoReply;
- (bool)isCritical;
- (bool)isExpirable;
- (bool)isSOS;
- (id)messageSubType;
- (id)messageSummaryInfo;
- (id)metadata;
- (id)nicknameInformation;
- (long long)replicationSourceID;
- (id)replyToGUID;
- (id)threadIdentifierGUID;
- (id)threadOriginatorFallbackHash;
- (id)truncatedNicknameRecordKey;

@end
