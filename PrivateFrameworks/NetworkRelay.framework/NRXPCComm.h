
@interface NRXPCComm : NSObject {
    bool  _cancelled;
    NSObject<OS_xpc_object> * _connection;
    NRDeviceIdentifier * _deviceIdentifier;
    unsigned long long  _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _notificationBlock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    bool  _sentCheckInMessage;
}

@property (nonatomic, retain) NRDeviceIdentifier *deviceIdentifier;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)initWithDeviceIdentifier:(id)arg1 notificationQueue:(id)arg2 notificationBlock:(id /* block */)arg3;
- (void)sendXPCCommDictionary:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;

@end
