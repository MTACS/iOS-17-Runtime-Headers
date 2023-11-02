
@interface AVBorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {
    int (* _afSiriActivationBuiltInMicVoiceFuncPtr;
    NSMutableArray * _clientConnections;
    Class  _clsVTStateManager;
    void * _mobileAssistantDylib;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSXPCListener * _serverListener;
    void * _voiceTriggerDylib;
    VTStateManager * _vtStateManager;
    struct BorealisServerImpl { int (**x1)(); unsigned int x2; struct HALListener {} *x3; struct HALListener {} *x4; struct HALListener {} *x5; int x6; char *x7; char *x8; bool x9; bool x10; bool x11; bool x12; bool x13; id x14; id x15; int x16; struct unfair_recursive_lock {} *x17; id x18; bool x19; unsigned int x20; } * serverImpl;
}

@property (nonatomic) int (*afSiriActivationBuiltInMicVoiceFuncPtr;
@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (nonatomic, retain) Class clsVTStateManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) void*mobileAssistantDylib;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSXPCListener *serverListener;
@property (readonly) Class superclass;
@property (nonatomic) void*voiceTriggerDylib;
@property (nonatomic, retain) VTStateManager *vtStateManager;

- (void).cxx_destruct;
- (int (*)afSiriActivationBuiltInMicVoiceFuncPtr;
- (id)clientConnections;
- (Class)clsVTStateManager;
- (void)dealloc;
- (void)enableBargeInMode:(bool)arg1 reply:(id /* block */)arg2;
- (void)enableListeningOnPorts:(id)arg1 reply:(id /* block */)arg2;
- (void)enableSpeakerStateListening:(bool)arg1 reply:(id /* block */)arg2;
- (void)enableVoiceTriggerListening:(bool)arg1 reply:(id /* block */)arg2;
- (void)getInputChannelInfoCompletion:(id /* block */)arg1;
- (bool)hardwareSupportsVoiceTrigger;
- (bool)heySiriEnabled;
- (id)init;
- (void)initializeWithReply:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)listeningEnabledReply:(id /* block */)arg1;
- (void*)mobileAssistantDylib;
- (id)notificationQueue;
- (void)portsActiveReply:(id /* block */)arg1;
- (void)sendActiveStateChangedNotificationForPort:(unsigned long long)arg1 isActive:(bool)arg2;
- (void)sendSpeakerMuteStateChangedNotification:(bool)arg1;
- (void)sendVoiceTriggerOccuredNotification:(id)arg1 triggerTime:(unsigned long long)arg2;
- (id)serverListener;
- (void)setAfSiriActivationBuiltInMicVoiceFuncPtr:(int (*)arg1;
- (void)setAggressiveECMode:(bool)arg1 reply:(id /* block */)arg2;
- (void)setClientConnections:(id)arg1;
- (void)setClsVTStateManager:(Class)arg1;
- (void)setListeningProperty:(bool)arg1 reply:(id /* block */)arg2;
- (void)setMobileAssistantDylib:(void*)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setServerListener:(id)arg1;
- (void)setVoiceTriggerDylib:(void*)arg1;
- (void)setVtStateManager:(id)arg1;
- (void)siriClientRecordStateChanged:(bool)arg1;
- (void)siriClientsRecordingReply:(id /* block */)arg1;
- (void)speakerStateActiveReply:(id /* block */)arg1;
- (void)speakerStateMutedReply:(id /* block */)arg1;
- (void)speechDetectionVADCreated;
- (void)updateVoiceTriggerConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (void*)voiceTriggerDylib;
- (void)voiceTriggerPastDataFramesAvailable:(id /* block */)arg1;
- (id)vtStateManager;

@end
