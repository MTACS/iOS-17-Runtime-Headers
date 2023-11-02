
@protocol IPXPCEventStateUpdateStreamSubscriberDelegate <NSObject>

@required

- (void)subscriber:(IPXPCEventStateUpdateStreamSubscriber *)arg1 firePayload:(NSObject<OS_xpc_object> *)arg2;
- (void)subscriber:(void *)arg1 firePayload:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: IPXPCEventStateUpdateStreamSubscriber *, NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (void)subscriberFailedHandshake:(IPXPCEventStateUpdateStreamSubscriber *)arg1;

@end
