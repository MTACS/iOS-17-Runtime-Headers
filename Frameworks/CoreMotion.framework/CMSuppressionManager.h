
@interface CMSuppressionManager : NSObject <DPCWatchPresenceDelegate> {
    id  _internal;
    long long  _suppressionClientType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long suppressionClientType;

+ (bool)isAvailable;

- (void)connect;
- (struct CMSuppressionEventStruct { double x1; long long x2; unsigned long long x3; })currentSuppressionEvent;
- (void)dealloc;
- (void)deallocPrivate;
- (void)didDetectSignificantUserInteraction;
- (void)feedDevicePresenceEvent:(long long)arg1 timestamp:(double)arg2 force:(bool)arg3;
- (void)feedSmartPowerNapEvent:(long long)arg1 timestamp:(double)arg2 force:(bool)arg3;
- (void)feedViewObstructedEvent:(long long)arg1 timestamp:(double)arg2 force:(bool)arg3;
- (void)handleSmartPowerNapState:(unsigned char)arg1;
- (id)init;
- (id)initPrivateWithClientType:(long long)arg1;
- (id)initWithClientType:(long long)arg1;
- (void)managerDidDetectEvent:(unsigned long long)arg1;
- (void)managerDidFindError:(unsigned long long)arg1;
- (void)onEclipseData:(const struct Suppress { double x1; bool x2; }*)arg1;
- (void)onNotification:(id)arg1;
- (void)onViewObstructedStateData:(const struct ViewObstructedState { double x1; struct ViewObstructedState { unsigned char x_2_1_1; struct Suppress { unsigned char x_2_2_1; bool x_2_2_2; bool x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; float x_2_2_7; float x_2_2_8; } x_2_1_2; float x_2_1_3[8]; } x2; }*)arg1;
- (void)sendServiceRequestPrivate;
- (void)sendSuppressionEventToClientPrivate;
- (void)sendViewObstructedRequestPrivate;
- (void)sendViewObstructedStateToClientPrivate;
- (void)simulateSignificantUserInteraction;
- (void)startService;
- (void)startSuppressionUpdatesPrivateToQueue:(id)arg1 withOptions:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)startSuppressionUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startSuppressionUpdatesToQueue:(id)arg1 withOptions:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)startViewObstructedStateUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startViewObstructedStateUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopService;
- (void)stopSuppressionUpdates;
- (void)stopSuppressionUpdatesPrivate;
- (void)stopViewObstructedStateUpdates;
- (void)stopViewObstructedStateUpdatesPrivate;
- (long long)suppressionClientType;
- (void)updateCurrentSuppressionEvent:(long long)arg1 timestamp:(double)arg2 reason:(unsigned long long)arg3;
- (void)updateSuppressionStateAndSendToClient;
- (id)viewObstructedBlocking;

@end
