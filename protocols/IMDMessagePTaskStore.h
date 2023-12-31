
@protocol IMDMessagePTaskStore <NSObject>

@required

- (bool)deleteAllCompletedTasks;
- (NSArray *)loadMostRecentMessagePTasks;
- (bool)storePTask:(IMDMessagePTask *)arg1;
- (bool)updateTaskFlagsForPTask:(IMDMessagePTask *)arg1;

@end
