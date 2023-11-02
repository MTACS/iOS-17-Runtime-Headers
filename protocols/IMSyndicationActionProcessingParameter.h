
@protocol IMSyndicationActionProcessingParameter <IMPipelineParameter, IMFindChatProcessingParameter>

@required

- (IMDChat *)chat;
- (IMSyndicationAction *)createSyndicationActionWithChat:(IMDChat *)arg1;
- (void)setSyndicationAction:(IMSyndicationAction *)arg1;
- (IMSyndicationAction *)syndicationAction;

@end
