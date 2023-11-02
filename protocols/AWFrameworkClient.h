
@protocol AWFrameworkClient <NSObject>

@required

- (void)notify:(unsigned long long)arg1;
- (void)notifyEvent:(AWAttentionEvent *)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(AWAttentionEvent *)arg2;
- (void)notifyStreamingEvent:(AWAttentionEvent *)arg1;

@end
