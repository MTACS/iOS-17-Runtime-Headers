
@interface DDPeoplePickerMutableSceneClientSettings : UIMutableApplicationSceneClientSettings {
    NSUUID * _connectedDeviceUUID;
}

@property (nonatomic, retain) NSUUID *connectedDeviceUUID;

- (void).cxx_destruct;
- (id)connectedDeviceUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setConnectedDeviceUUID:(id)arg1;

@end
