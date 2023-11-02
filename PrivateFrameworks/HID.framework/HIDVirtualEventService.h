
@interface HIDVirtualEventService : NSObject {
    HIDEventSystemClient * _client;
    <HIDVirtualEventServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    HIDServiceClient * _serviceClient;
    _Atomic int  _state;
}

@property (retain) HIDEventSystemClient *client;
@property <HIDVirtualEventServiceDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) HIDServiceClient *serviceClient;
@property (readonly) unsigned long long serviceID;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (id)client;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)dispatchEvent:(id)arg1;
- (id)init;
- (id)queue;
- (id)serviceClient;
- (unsigned long long)serviceID;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceClient:(id)arg1;

@end
