
@protocol IMMessageLegacyProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (IMDAccount *)account;
- (NSArray *)attributionInfoArray;
- (NSString *)availabilityVerificationRecipientChannelIDPrefix;
- (NSString *)availabilityVerificationRecipientEncryptionValidationToken;
- (IMDChat *)chat;
- (NSString *)currentGroupName;
- (NSString *)encryptionType;
- (NSString *)fromDisplayID;
- (NSString *)fromIdentifier;
- (NSString *)groupID;
- (NSNumber *)groupPhotoCreationTime;
- (bool)hadChat;
- (NSDictionary *)inlineAttachmentsDictionary;
- (bool)isFromMe;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (NSArray *)messageItems;
- (NSDictionary *)nicknameDictionary;
- (NSArray *)participantIdentifiers;
- (NSString *)replicationSourceServiceName;
- (IMDServiceSession *)serviceSession;
- (void)setChat:(IMDChat *)arg1;
- (void)setHadChat:(bool)arg1;
- (NSString *)toIdentifier;
- (bool)wantsCheckpointing;
- (bool)wantsDeliveryReceipt;

@end
