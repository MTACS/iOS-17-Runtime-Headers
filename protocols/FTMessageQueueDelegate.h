
@protocol FTMessageQueueDelegate

@required

- (void)queue:(FTMessageQueue *)arg1 hitTimeoutForMessage:(IDSBaseMessage *)arg2;

@end
