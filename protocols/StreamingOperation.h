
@protocol StreamingOperation

@required

- (bool)attentionStreamerRunning;
- (NSError *)cancelEventStream;
- (struct { bool x1; bool x2; })getStreamerOptions;
- (void)setNotificationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)setSmartCoverState:(bool)arg1;
- (NSError *)streamEventWithBlock:(void *)arg1 options:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AWAttentionEvent *, void*, struct { bool x1; bool x2; }

@end
