
@protocol SAActivityBehavior <NSObject>

@required

- (bool)hasActivityBehavior;

@optional

- (<SAActivityHosting> *)activityHost;
- (void)setActivityHost:(id <SAActivityHosting>)arg1;

@end
