
@protocol _GCHIDEventSource <NSObject>

@required

- (id)observeHIDEvents:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __IOHIDEvent { }*, void*
- (id)observeHIDEvents:(void *)arg1 forService:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __IOHIDEvent { }*, void*, _GCHIDServiceInfo *

@end
