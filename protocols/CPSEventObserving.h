
@protocol CPSEventObserving <NSObject>

@required

- (bool)shouldForwardEventForWindow:(CPSWindow *)arg1 eventType:(long long)arg2;

@end
