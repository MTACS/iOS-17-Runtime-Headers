
@interface DIDeviceManager : NSObject <DIDeviceListDelegate, DIDeviceStatusDelegate, DIXPCManagerCheckInObserver> {
    DIXPCConnectionManager * _connectionManager;
    DIDevice * _currentDevice;
    <DIDeviceManagerDelegate> * _delegate;
    NSArray * _devices;
}

@property (nonatomic, readonly) DIXPCConnectionManager *connectionManager;
@property (nonatomic, retain) DIDevice *currentDevice;
@property (nonatomic) <DIDeviceManagerDelegate> *delegate;
@property (nonatomic, copy) NSArray *devices;

- (void).cxx_destruct;
- (id)connectionManager;
- (id)currentDevice;
- (id)delegate;
- (id)devices;
- (void)didAddDevice:(id)arg1;
- (void)didLoadDevices:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (void)didUpdateDevice:(id)arg1;
- (id)initWithConnectionManager:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)xpcManagerDidPerformDaemonCheckIn:(id)arg1;

@end
