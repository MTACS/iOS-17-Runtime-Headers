
@interface FBSXPCMessage : NSObject {
    NSObject<OS_xpc_object> * _payload;
    <BSXPCServiceConnectionMessage> * _reply;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *payload;

+ (id)message;
+ (id)messageWithBSXPCMessage:(id)arg1 ownReply:(bool)arg2;
+ (id)messageWithPacker:(id /* block */)arg1;
+ (id)messageWithPayload:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessagePacker:(id /* block */)arg1;
- (id)initWithMessagePayload:(id)arg1;
- (id)payload;
- (void)sendReplyMessageWithPacker:(id /* block */)arg1;

@end
