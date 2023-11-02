
@protocol IMMarkUnreadRequestProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (bool)isFromMe;
- (void)setChat:(IMDChat *)arg1;
- (void)setMessageItems:(NSArray *)arg1;
- (NSNumber *)timestamp;

@end
