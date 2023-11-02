
@protocol IMEditMessageCommandProcessingParameter <IMPipelineParameter>

@required

- (NSString *)editCommandGUID;
- (unsigned long long)editType;
- (NSString *)editedMessageGUID;
- (NSAttributedString *)editedMessagePartBody;
- (NSArray *)editedMessagePartFileTransferGUIDs;
- (long long)editedMessagePartIndex;
- (bool)hasEditTypeAndPartIndex;
- (IMDiMessageIDSTrustedData *)idsTrustedData;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (void)setChat:(IMDChat *)arg1;
- (void)setMessageItems:(NSArray *)arg1;
- (bool)shouldRetractMessageSubject;
- (NSNumber *)timestamp;

@end
