
@interface EACellBroadcastMessageListener : NSObject {
    EAEmergencyAlertCenter * _emergencyAlertCenter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cellBroadcastMessageReceived:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)start;

@end
