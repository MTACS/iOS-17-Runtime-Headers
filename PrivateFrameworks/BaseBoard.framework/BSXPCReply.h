
@interface BSXPCReply : NSObject {
    NSObject<OS_xpc_object> * _reply;
    int  _sent;
}

+ (id)messageWithReply:(id)arg1;
+ (id)replyForMessage:(id)arg1;

- (void).cxx_destruct;
- (id)initForMessage:(id)arg1;
- (id)initWithReply:(id)arg1;
- (id)message;
- (long long)messageKind;
- (void)sendReply:(id /* block */)arg1;

@end
