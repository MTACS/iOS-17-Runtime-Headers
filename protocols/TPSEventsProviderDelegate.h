
@protocol TPSEventsProviderDelegate <NSObject>

@required

- (void)dataProvider:(TPSEventsProvider *)arg1 didFinishQueryWithResults:(NSArray *)arg2;
- (void)dataProvider:(TPSEventsProvider *)arg1 didReceiveCallbackWithResult:(TPSEventProviderResult *)arg2;

@end
