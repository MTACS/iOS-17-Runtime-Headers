
@protocol IMJunkMessagePipelineParameter <IMPipelineParameter>

@required

- (IMDAccount *)account;
- (IMDChat *)chat;
- (NSString *)fromIdentifier;
- (bool)hadChat;
- (bool)isFromMe;
- (NSArray *)messageItems;
- (void)setChat:(IMDChat *)arg1;
- (void)setFromIdentifier:(NSString *)arg1;
- (void)setHadChat:(bool)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setToIdentifier:(NSString *)arg1;
- (NSString *)toIdentifier;

@end
