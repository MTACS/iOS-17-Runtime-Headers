
@protocol IMTextMessageProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (IMDAccount *)account;
- (IMDChat *)chat;
- (NSString *)expressiveSendStyleIdentifier;
- (NSArray *)fileTransferGUIDs;
- (NSString *)fromDisplayID;
- (NSString *)fromIdentifier;
- (bool)isAutoReply;
- (bool)isCritical;
- (bool)isExpirable;
- (bool)isFromMe;
- (bool)isSOS;
- (NSDictionary *)messageSummaryInfo;
- (NSArray *)participantIdentifiers;
- (NSString *)plainTextBody;
- (NSString *)plainTextSubject;
- (NSString *)replicationSourceServiceName;
- (NSAttributedString *)richBody;
- (void)setMessageItems:(NSArray *)arg1;
- (NSString *)threadIdentifierGUID;
- (NSNumber *)timestamp;
- (NSString *)toIdentifier;
- (bool)wantsDeliveryReceipt;
- (bool)wasDetonated;

@end
