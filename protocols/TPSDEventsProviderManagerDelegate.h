
@protocol TPSDEventsProviderManagerDelegate <NSObject>

@required

- (void)dataProviderManager:(TPSEventsProviderManager *)arg1 didFinishQueryWithResults:(NSArray *)arg2 type:(long long)arg3;
- (void)dataProviderManager:(TPSEventsProviderManager *)arg1 didReceiveCallbackWithResult:(TPSEventProviderResult *)arg2 type:(long long)arg3;

@end
