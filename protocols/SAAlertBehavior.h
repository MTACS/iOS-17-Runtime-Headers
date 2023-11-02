
@protocol SAAlertBehavior <NSObject>

@required

- (bool)hasAlertBehavior;

@optional

- (<SAAlertHosting> *)alertHost;
- (void)setAlertHost:(id <SAAlertHosting>)arg1;

@end
