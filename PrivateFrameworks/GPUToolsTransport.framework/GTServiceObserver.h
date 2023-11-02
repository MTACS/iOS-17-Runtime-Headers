
@interface GTServiceObserver : NSObject {
    <GTXPCConnection> * _connection;
    NSObject<OS_xpc_object> * _replyPath;
    unsigned long long  _replyStream;
}

@property (readonly) <GTXPCConnection> *connection;
@property (readonly) NSObject<OS_xpc_object> *replyPath;
@property (readonly) unsigned long long replyStream;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithMessage:(id)arg1 notifyConnection:(id)arg2;
- (id)replyPath;
- (unsigned long long)replyStream;

@end
