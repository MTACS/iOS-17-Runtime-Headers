
@interface CRSIconLayoutController : NSObject <CRSIconLayoutServerToClientInterface> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BSServiceConnection * _connection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)connection;
- (void)dealloc;
- (void)exportIconStateForCertificateSerial:(id)arg1 categories:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchIconStateForVehicleID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)resetIconStateForVehicleID:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setIconOrder:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3;

@end
