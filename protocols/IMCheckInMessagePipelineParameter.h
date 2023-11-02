
@protocol IMCheckInMessagePipelineParameter <IMPipelineParameter>

@required

- (IMDChat *)chat;
- (NSString *)fromIdentifier;
- (bool)isFromMe;
- (void)setChat:(IMDChat *)arg1;
- (void)setFromIdentifier:(NSString *)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setToIdentifier:(NSString *)arg1;
- (NSString *)toIdentifier;

@end
