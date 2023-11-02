
@interface _GCHapticServerManager : NSObject {
    bool  _activeEvents;
    BKSApplicationStateMonitor * _appMonitor;
    unsigned long long  _channelID;
    NSMutableDictionary * _clientInvalidationHandlers;
    NSMutableDictionary * _clients;
    NSMutableDictionary * _hapticPlayers;
    bool  _idle;
    NSMutableDictionary * _logicalHapticDevices;
    unsigned long long  _nextClientID;
    NSObject<OS_dispatch_queue> * _runloopQueue;
    bool  _running;
    unsigned long long  _tickCount;
    float  _tickLengthSeconds;
    NSObject<OS_dispatch_queue> * queue;
}

@property (nonatomic) bool activeEvents;
@property (nonatomic, retain) NSMutableDictionary *clients;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *runloopQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)__onqueue_reserveChannels:(unsigned long long)arg1 forClient:(id)arg2;
- (bool)acceptNewConnection:(id)arg1 fromHapticsEnabledApp:(id)arg2;
- (bool)activeEvents;
- (id)clients;
- (void)dealloc;
- (void)enterRunloop;
- (void)hapticClientProxyInitialized:(id)arg1;
- (void)identifyCompletedClients;
- (id)init;
- (void)logicalDeviceWasUnregistered:(id)arg1;
- (void)notifyPlayerNoLongerRetained:(id)arg1;
- (bool)playersHaveImpendingCommandsForStartTime:(double)arg1 endTime:(double)arg2;
- (void)processActiveEventsForStartTime:(double)arg1 endTime:(double)arg2;
- (void)processScheduledCommandsForStartTime:(double)arg1 endTime:(double)arg2;
- (bool)readClientDataForStartTime:(double)arg1 endTime:(double)arg2;
- (void)readListCommand:(struct HapticCommand { struct MessageHeader { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; unsigned int x2; double x3; unsigned long long x4; unsigned long long x5; union u { struct TokenAndParams { unsigned long long x_1_2_1; struct ItemList<FixedParam, 8> { unsigned int x_2_3_1; struct FixedParam { unsigned int x_2_4_1; float x_2_4_2; } x_2_3_2[8]; } x_1_2_2; } x_6_1_1; struct SequenceChannelParam { unsigned long long x_2_2_1; unsigned long long x_2_2_2; float x_2_2_3; } x_6_1_2; struct SequenceParam { unsigned short x_3_2_1; float x_3_2_2; } x_6_1_3; float x_6_1_4; double x_6_1_5; struct ItemList<ParamPoint, 16> { unsigned int x_6_2_1; struct ParamPoint { float x_2_3_1; float x_2_3_2; } x_6_2_2[16]; } x_6_1_6; } x6; })arg1 client:(id)arg2 renderTime:(double)arg3;
- (void)readParamCurveListCommand:(struct HapticCommand { struct MessageHeader { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; unsigned int x2; double x3; unsigned long long x4; unsigned long long x5; union u { struct TokenAndParams { unsigned long long x_1_2_1; struct ItemList<FixedParam, 8> { unsigned int x_2_3_1; struct FixedParam { unsigned int x_2_4_1; float x_2_4_2; } x_2_3_2[8]; } x_1_2_2; } x_6_1_1; struct SequenceChannelParam { unsigned long long x_2_2_1; unsigned long long x_2_2_2; float x_2_2_3; } x_6_1_2; struct SequenceParam { unsigned short x_3_2_1; float x_3_2_2; } x_6_1_3; float x_6_1_4; double x_6_1_5; struct ItemList<ParamPoint, 16> { unsigned int x_6_2_1; struct ParamPoint { float x_2_3_1; float x_2_3_2; } x_6_2_2[16]; } x_6_1_6; } x6; })arg1 client:(id)arg2;
- (void)removeHapticClient:(id)arg1;
- (id)runloopQueue;
- (void)scheduleCommand:(const void*)arg1;
- (void)setActiveEvents:(bool)arg1;
- (void)setClients:(id)arg1;
- (void)spawnInputThread;

@end
