
@interface BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetClient : NSObject <BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection * _daemonConnection;
    NSObject<BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol> * _delegate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, readonly) NSXPCConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;

- (void).cxx_destruct;
- (void)activateUsingWiFiWithCompletion:(id /* block */)arg1;
- (void)beginAdvertisingProximityAutomatedDeviceEnrollment;
- (void)configuratorPairingSuccessfulWithViewModel:(id)arg1;
- (id)connectionQueue;
- (id)connectionToMachService:(id)arg1;
- (id)daemonConnection;
- (id)delegate;
- (void)dismissProximityPinCodeWithError:(id)arg1;
- (void)displayProximityPinCode:(id)arg1;
- (void)displayShutdownUI;
- (void)endAdvertisingProximityAutomatedDeviceEnrollment;
- (void)enrollmentCompleteWithViewModel:(id)arg1;
- (void)enrollmentHasStatusUpdateWithViewModel:(id)arg1;
- (void)fetchActivationStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)shutdown;

@end
