
@protocol IMMessageMomentShareProcessingParameter <IMPipelineParameter>

@required

- (IMDChat *)chat;
- (NSArray *)messageItems;
- (void)setChat:(IMDChat *)arg1;

@end
