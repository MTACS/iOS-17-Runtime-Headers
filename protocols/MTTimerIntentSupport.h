
@protocol MTTimerIntentSupport <NSObject>

@required

- (double)duration;
- (NSDate *)lastModifiedDate;
- (double)remainingTime;
- (NSDictionary *)siriContext;
- (unsigned long long)state;
- (NSUUID *)timerID;
- (NSString *)title;
- (long long)type;

@end
