
@protocol AAEventProcessorType

@required

- (void)processEvent:(AAProcessEvent *)arg1;

@optional

- (void)didEndSession:(AASession *)arg1 endDate:(NSDate *)arg2;
- (void)didEnterGroup:(AAGroup *)arg1;
- (void)didLeaveGroup:(AAGroup *)arg1;
- (void)didStartSession:(AASession *)arg1;
- (void)didUpdateSession:(AASession *)arg1;

@end
