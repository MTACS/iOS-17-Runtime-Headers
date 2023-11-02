
@interface OS_remote_device : NSObject {
    id /* block */  _connected_callback;
    NSObject<OS_dispatch_queue> * _connected_callback_queue;
    OS_remote_device * _connected_callback_self_retain;
    NSObject<OS_xpc_object> * _connection;
    unsigned long long  _device_id;
    id /* block */  _disconnected_callback;
    NSObject<OS_dispatch_queue> * _disconnected_callback_queue;
    OS_remote_device * _disconnected_callback_self_retain;
    NSObject<OS_dispatch_queue> * _dq;
    unsigned long long  _messaging_protocol_version;
    NSObject<OS_xpc_object> * _properties;
    unsigned int  _state;
    unsigned int  _type;
    char * _uuid;
    char * device_alias;
    char * device_name;
}

@property (nonatomic, copy) id /* block */ connected_callback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connected_callback_queue;
@property (nonatomic, retain) OS_remote_device *connected_callback_self_retain;
@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic) unsigned long long device_id;
@property (nonatomic, copy) id /* block */ disconnected_callback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *disconnected_callback_queue;
@property (nonatomic, retain) OS_remote_device *disconnected_callback_self_retain;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dq;
@property (nonatomic) unsigned long long messaging_protocol_version;
@property (nonatomic, retain) NSObject<OS_xpc_object> *properties;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int type;
@property (nonatomic) char *uuid;

- (void).cxx_destruct;
- (id /* block */)connected_callback;
- (id)connected_callback_queue;
- (id)connected_callback_self_retain;
- (id)connection;
- (void)dealloc;
- (unsigned long long)device_id;
- (id /* block */)disconnected_callback;
- (id)disconnected_callback_queue;
- (id)disconnected_callback_self_retain;
- (id)dq;
- (id)init;
- (unsigned long long)messaging_protocol_version;
- (id)properties;
- (void)setConnected_callback:(id /* block */)arg1;
- (void)setConnected_callback_queue:(id)arg1;
- (void)setConnected_callback_self_retain:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDevice_id:(unsigned long long)arg1;
- (void)setDisconnected_callback:(id /* block */)arg1;
- (void)setDisconnected_callback_queue:(id)arg1;
- (void)setDisconnected_callback_self_retain:(id)arg1;
- (void)setDq:(id)arg1;
- (void)setMessaging_protocol_version:(unsigned long long)arg1;
- (void)setProperties:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuid:(char *)arg1;
- (unsigned int)state;
- (unsigned int)type;
- (char *)uuid;

@end
