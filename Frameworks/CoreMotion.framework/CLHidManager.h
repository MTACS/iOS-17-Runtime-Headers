
@interface CLHidManager : NSObject {
    NSMutableArray * _clientDevices;
    <CLHidManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HIDManager * _manager;
}

@property (nonatomic, retain) NSMutableArray *clientDevices;
@property (nonatomic) <CLHidManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) HIDManager *manager;

- (void)activateClientDevice:(id)arg1;
- (id)clientDevices;
- (id)createDeviceForMatchingDictionary:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)getClientDeviceMatchingDict:(id)arg1;
- (id)getClientDeviceMatchingHIDDevice:(id)arg1;
- (id)getHidDeviceFromEnumeratedDevicesMatching:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)manager;
- (id)registerForDeviceMatching:(id)arg1;
- (void)sendMonitorUpdateForDevice:(id)arg1 added:(bool)arg2;
- (void)setClientDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregisterForDeviceMatching:(id)arg1;
- (void)updateClientDeviceWithHidDevice:(id)arg1 added:(bool)arg2;

@end
