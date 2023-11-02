
@interface PKPushRegistry : NSObject <PKComplicationXPCClient, PKFileProviderXPCClient, PKUserNotificationsConnectionClient, PKVoIPXPCClient> {
    int  _complicationToken;
    <PKPushRegistryDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSSet * _desiredPushTypes;
    int  _fileProviderToken;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    double  _lastReportedCallTime;
    int  _outstandingVoIPPushes;
    NSMutableDictionary * _pushTypeToConnection;
    NSMutableDictionary * _pushTypeToToken;
    int  _voipToken;
}

@property (nonatomic) int complicationToken;
@property (readonly, copy) NSString *debugDescription;
@property <PKPushRegistryDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (copy) NSSet *desiredPushTypes;
@property (nonatomic) int fileProviderToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ivarQueue;
@property (nonatomic) double lastReportedCallTime;
@property (nonatomic) int outstandingVoIPPushes;
@property (nonatomic, retain) NSMutableDictionary *pushTypeToConnection;
@property (nonatomic, retain) NSMutableDictionary *pushTypeToToken;
@property (readonly) Class superclass;
@property (nonatomic) int voipToken;

+ (void)_assertIfCallKitNotLinked;
+ (id)_pushTypeToMachServiceName;

- (void).cxx_destruct;
- (id)_createConnectionForPushType:(id)arg1;
- (void)_noteIncomingCallReported;
- (void)_registerForPushType:(id)arg1;
- (void)_renewConnectionForPushTypeIfRegistered:(id)arg1;
- (bool)_selfTaskHasEntitlement:(struct __CFString { }*)arg1;
- (void)_terminateAppIfThereAreUnhandledVoIPPushes;
- (void)_unregisterForPushType:(id)arg1;
- (void)complicationPayloadReceived:(id)arg1;
- (void)complicationRegistrationFailed;
- (void)complicationRegistrationSucceededWithDeviceToken:(id)arg1;
- (int)complicationToken;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)desiredPushTypes;
- (void)fileProviderPayloadReceived:(id)arg1;
- (void)fileProviderRegistrationFailed;
- (void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1;
- (int)fileProviderToken;
- (id)initWithQueue:(id)arg1;
- (id)ivarQueue;
- (double)lastReportedCallTime;
- (int)outstandingVoIPPushes;
- (id)pushTokenForType:(id)arg1;
- (id)pushTypeToConnection;
- (id)pushTypeToToken;
- (void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(id)arg1;
- (void)setComplicationToken:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDesiredPushTypes:(id)arg1;
- (void)setFileProviderToken:(int)arg1;
- (void)setIvarQueue:(id)arg1;
- (void)setLastReportedCallTime:(double)arg1;
- (void)setOutstandingVoIPPushes:(int)arg1;
- (void)setPushTypeToConnection:(id)arg1;
- (void)setPushTypeToToken:(id)arg1;
- (void)setVoipToken:(int)arg1;
- (void)voipPayloadReceived:(id)arg1 mustPostCall:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)voipRegistrationFailed;
- (void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
- (int)voipToken;

@end
