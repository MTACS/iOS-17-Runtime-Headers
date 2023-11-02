
@interface MTRDevicePairingDelegateShim : NSObject <MTRDeviceControllerDelegate> {
    <MTRDevicePairingDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MTRDevicePairingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)controller:(id)arg1 commissioningComplete:(id)arg2;
- (void)controller:(id)arg1 commissioningSessionEstablishmentDone:(id)arg2;
- (void)controller:(id)arg1 statusUpdate:(long long)arg2;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)onPairingDeleted:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
