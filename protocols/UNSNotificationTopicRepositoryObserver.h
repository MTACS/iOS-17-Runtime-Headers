
@protocol UNSNotificationTopicRepositoryObserver <NSObject>

@required

- (void)topicRepository:(UNSNotificationTopicRepository *)arg1 didChangeTopicsForBundleIdentifier:(NSString *)arg2;

@end
