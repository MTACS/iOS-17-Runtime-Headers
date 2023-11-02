
@protocol IMFindChatProcessingParameter <IMPipelineParameter>

@required

- (IMDAccount *)account;
- (NSString *)currentGroupName;
- (NSString *)fromDisplayID;
- (NSString *)fromIdentifier;
- (NSString *)groupID;
- (NSArray *)participantIdentifiers;
- (void)setChat:(IMDChat *)arg1;
- (NSString *)toIdentifier;

@end
