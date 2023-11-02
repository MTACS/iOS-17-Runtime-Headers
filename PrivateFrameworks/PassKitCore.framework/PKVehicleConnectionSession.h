
@interface PKVehicleConnectionSession : NSObject <PKPassLibraryDelegate> {
    PKAssertion * _assertion;
    long long  _connectionStatus;
    <PKVehicleConnectionDelegate> * _delegate;
    PKPassLibrary * _passLibrary;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) long long connectionStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKVehicleConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)sessionForPass:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_initWithDelegate:(id)arg1 sessionIdentifier:(id)arg2 passLibrary:(id)arg3 assertion:(id)arg4;
- (void)_updateConnectionState:(long long)arg1;
- (long long)connectionStatus;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (id)new;
- (void)passLibraryReceivedInterruption;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)vehicleConnectionDidRecievePassthroughData:(id)arg1;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)arg1;

@end
