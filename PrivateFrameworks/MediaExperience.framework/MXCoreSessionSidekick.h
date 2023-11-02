
@interface MXCoreSessionSidekick : MXCoreSessionBase {
    NSString * _remoteDeviceID;
}

@property (nonatomic, retain) NSString *remoteDeviceID;

- (int)_activate;
- (int)_copyPropertyForKey:(id)arg1 valueOut:(id*)arg2;
- (int)_deactivate:(bool)arg1 postInterruptionNotification:(bool)arg2;
- (id)_initWithRemoteDeviceID:(id)arg1;
- (int)_setPropertyForKey:(id)arg1 value:(id)arg2;
- (int)activate;
- (int)copyPropertyForKey:(id)arg1 valueOut:(id*)arg2;
- (int)deactivate:(bool)arg1 postInterruptionNotification:(bool)arg2;
- (void)dealloc;
- (id)initWithRemoteDeviceID:(id)arg1;
- (bool)isCategoryValid:(id)arg1;
- (bool)isModeValidForCategory:(id)arg1;
- (id)remoteDeviceID;
- (int)setPropertyForKey:(id)arg1 value:(id)arg2;
- (void)setRemoteDeviceID:(id)arg1;

@end
