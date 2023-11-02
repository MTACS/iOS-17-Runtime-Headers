
@protocol HDSPSleepEventHandler <NSObject>

@required

- (void)sleepEventIsDue:(HKSPSleepEvent *)arg1;

@optional

- (NSSet *)eventIdentifiers;

@end
