
@interface SCLSchoolModeManager : NSObject <NSXPCListenerDelegate, SCLSchoolModeClientProxyDelegate> {
    NSMutableSet * _clients;
    SCLSchoolModeManagerConfiguration * _configuration;
    NSMapTable * _coordinatorMap;
    SCLInterruptBehaviorResolver * _interruptBehaviorResolver;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _stateHandle;
    SCLSuppressSchoolModeAssertionManager * _supppressionManager;
    SCLTransportService * _transportService;
}

@property (nonatomic, readonly) NSMutableSet *clients;
@property (nonatomic, readonly) SCLSchoolModeManagerConfiguration *configuration;
@property (nonatomic, readonly) NSMapTable *coordinatorMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SCLInterruptBehaviorResolver *interruptBehaviorResolver;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SCLSuppressSchoolModeAssertionManager *supppressionManager;
@property (nonatomic, readonly) SCLTransportService *transportService;

- (void).cxx_destruct;
- (void)_handleActivityStarted:(id)arg1;
- (void)_updateActivityRegistration;
- (id)activityCriteria;
- (void)clientProxy:(id)arg1 didConnectWithPairingID:(id)arg2;
- (void)clientProxyDidInvalidate:(id)arg1;
- (id)clients;
- (id)configuration;
- (id)coordinatorMap;
- (void)createControllerForDevice:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderForNRDevice:(id)arg1;
- (id)eligiblePairedDevices;
- (void)handleDevicePairedNotification:(id)arg1;
- (void)handleDeviceUnpairedNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)interruptBehaviorResolver;
- (bool)isEligibleDevice:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadPairedDevices;
- (id)queue;
- (void)removeCoordinator:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)start;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)stateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (unsigned long long)stateHandle;
- (id)supppressionManager;
- (id)transportService;

@end
