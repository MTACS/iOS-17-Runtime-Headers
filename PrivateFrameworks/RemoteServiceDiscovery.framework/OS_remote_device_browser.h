
@interface OS_remote_device_browser : NSObject {
    id /* block */  _callback;
    bool  _canceled;
    bool  _canceling;
    NSObject<OS_dispatch_queue> * _cbq;
    NSObject<OS_xpc_object> * _connection;
    unsigned int  _device_type;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic) bool canceled;
@property (nonatomic) bool canceling;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cbq;
@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic) unsigned int device_type;

- (void).cxx_destruct;
- (id /* block */)callback;
- (bool)canceled;
- (bool)canceling;
- (id)cbq;
- (id)connection;
- (void)dealloc;
- (unsigned int)device_type;
- (void)setCallback:(id /* block */)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCanceling:(bool)arg1;
- (void)setCbq:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDevice_type:(unsigned int)arg1;

@end
