
@protocol _UIRemoteKeyboardsEventObserverDelegate <NSObject>

@required

- (long long)lastEventSource;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2 responder:(UIResponder *)arg3;

@end
