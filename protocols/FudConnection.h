
@protocol FudConnection <NSObject>

@required

- (void)sendMessageToFud:(NSObject<OS_xpc_object> *)arg1;
- (void)sendMessageToFud:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (void)stop;

@end
