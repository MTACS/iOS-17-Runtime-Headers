
@interface DSAdvertiseManager : NSObject {
    CBAdvertiser * _bleAdvertiser;
    unsigned char  _cbDSActionFlags;
    unsigned char  _cbTieBreaker;
    unsigned char  _cbVehicleConfidence;
    unsigned char  _cbVehicleState;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned long long  _dsAdvertiseFlags;
    DSXPCServer * _xpcDaemonServer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long dsAdvertiseFlags;
@property (nonatomic, retain) DSXPCServer *xpcDaemonServer;

- (void).cxx_destruct;
- (bool)_getAdvertisementFields;
- (void)_setDSActionFieldsInAdvertiser:(id)arg1;
- (void)_setDSInfoFieldsInAdvertiser:(id)arg1;
- (id)dispatchQueue;
- (unsigned long long)dsAdvertiseFlags;
- (void)setDispatchQueue:(id)arg1;
- (void)setDsAdvertiseFlags:(unsigned long long)arg1;
- (void)setXpcDaemonServer:(id)arg1;
- (void)startAdvertising;
- (void)stopAdvertising;
- (id)xpcDaemonServer;

@end
