
@interface AXUIMessageReplyHandler : NSObject

+ (id)createReplyObject:(id)arg1 fromMessage:(id)arg2 withError:(id)arg3;
+ (void)sendReply:(id)arg1 withError:(id)arg2 andOriginalXPCMessage:(id)arg3 usingConnection:(id)arg4 customDataAddingBlock:(id /* block */)arg5;

@end
