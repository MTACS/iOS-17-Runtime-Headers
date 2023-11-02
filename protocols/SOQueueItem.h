
@protocol SOQueueItem <NSObject>

@required

- (bool)isRunning;
- (SOAuthorizationRequestParameters *)requestParameters;
- (void)setIsRunning:(bool)arg1;

@end
