
@protocol AFNotifyObserverDelegate <NSObject>

@optional

- (void)notifyObserver:(AFNotifyObserver *)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifyObserver:(AFNotifyObserver *)arg1 didReceiveNotificationWithToken:(int)arg2;

@end
