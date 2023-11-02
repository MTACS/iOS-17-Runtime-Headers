
@protocol TRINotificationReactionCheckerProtocol

@required

- (struct { unsigned char x1; })reactionForHotfixDeployment:(TRIRolloutDeployment *)arg1 hotfixDeploymentDate:(NSDate *)arg2;
- (struct { unsigned char x1; })reactionForRollbackExperimentId:(NSString *)arg1;

@end
