
@protocol MTEventRecorderDelegate <NSObject>

@required

- (MTPromise *)recordEvent:(NSDictionary *)arg1 toTopic:(NSString *)arg2;

@optional

- (MTPromise *)flushUnreportedEvents;
- (MTPromise *)recordEvent:(NSDictionary *)arg1;
- (NSString *)sendMethod;

@end
