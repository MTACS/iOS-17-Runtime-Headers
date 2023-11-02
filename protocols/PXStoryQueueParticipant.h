
@protocol PXStoryQueueParticipant <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)storyQueue;

@end
