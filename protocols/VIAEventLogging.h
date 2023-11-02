
@protocol VIAEventLogging <NSObject>

@required

+ (NSSet *)feedbackNamesToLog;

- (void)didObserveEvent:(id <VIAEvent>)arg1;
- (void)logEvent:(id <VIAEvent>)arg1;

@end
