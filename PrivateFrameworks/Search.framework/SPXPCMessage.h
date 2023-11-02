
@interface SPXPCMessage : NSObject {
    NSDictionary * _info;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    SPXPCConnection * _receivingConnection;
    NSObject<OS_os_transaction> * _replyTransaction;
    NSObject<OS_xpc_object> * _x_Objects;
    NSObject<OS_xpc_object> * _x_feedbackData;
    NSObject<OS_xpc_object> * _x_message;
    NSObject<OS_xpc_object> * _x_reply;
    NSObject<OS_xpc_object> * _x_reply_connection;
    NSObject<OS_xpc_object> * _x_rootObject;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *feedbackData;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)_createXPCMessage;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (id)feedbackData;
- (id)info;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 connection:(id)arg2;
- (id)name;
- (bool)needsReply;
- (id)objectsOfClasses:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rootObjectOfClasses:(id)arg1;
- (id)rootObjectOfClassesForFeedback:(id)arg1;
- (void)sendReply:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRootObject:(id)arg1;
- (void)setRootObjectForFeedback:(id)arg1;

@end
