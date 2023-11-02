
@interface HAENUnknownDeviceManager : NSObject {
    unsigned long long  _adamSessionID;
    bool  _alertPending;
    bool  _alertSupported;
    int  _connectionCnt;
    NSString * _deviceName;
    NSString * _deviceUID;
    bool  _isWiredUnknown;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFUserNotification { } * _notification;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_isAlertSupported;
- (bool)_isUnknownWiredHeadset:(id)arg1;
- (void)_processPrompt:(id)arg1;
- (void)_processWiredDevice:(id)arg1;
- (void)_resetWiredStatus;
- (bool)_shouldSurfaceAlert:(id)arg1;
- (void)_updateMXVolumeLimitStatus:(id)arg1;
- (void)_wiredDeviceSessionCreated:(id)arg1 SessionID:(unsigned long long)arg2;
- (void)_wiredDeviceSessionDestroyed:(id)arg1;
- (void)_wiredDeviceSessionInit:(id)arg1;
- (void)deviceSessionCreated:(id)arg1 SessionID:(unsigned long long)arg2;
- (void)deviceSessionDestroyed:(id)arg1 isWired:(bool)arg2;
- (id)getDeviceName;
- (id)getDeviceUID;
- (id)init;
- (bool)isDeviceHeadphoneJack:(id)arg1;
- (bool)isUSBCPort;
- (void)registerDevice:(id)arg1;
- (void)setDeviceConnectionState:(id)arg1 isConnected:(bool)arg2;
- (void)surfaceAlertBox;
- (void)unknownWiredConnectionDidChange:(bool)arg1;
- (bool)unknownWiredHeadsetConnectedThroughB204;
- (void)updateWiredDeviceStatus;

@end
