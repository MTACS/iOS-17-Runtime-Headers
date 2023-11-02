
@interface IMEventNotificationBroadcaster : IMEventNotificationQueue

- (void)_didProcessQueue;
- (void)_willProcessQueue;
- (void)broadcastEventToListeners:(id /* block */)arg1;

@end
