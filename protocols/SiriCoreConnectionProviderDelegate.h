
@protocol SiriCoreConnectionProviderDelegate <NSObject>

@required

- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedError:(NSError *)arg2;

@optional

- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedViabilityChangeNotification:(bool)arg2;
- (void)connectionProviderReceivedBetterRouteNotification:(id <SiriCoreConnectionProvider>)arg1;

@end
