
@interface HMDCameraHomeSettingsConfiguration : HMFObject {
    NSArray * _cameraSettings;
    unsigned long long  _enabledResidentsDeviceCapabilities;
    bool  _faceClassificationEnabled;
    bool  _owner;
    NSArray * _userSettings;
}

@property (nonatomic, readonly) NSArray *cameraSettings;
@property (readonly) unsigned long long enabledResidentsDeviceCapabilities;
@property (getter=isFaceClassificationEnabled, readonly) bool faceClassificationEnabled;
@property (getter=isOwner, readonly) bool owner;
@property (nonatomic, readonly) NSArray *userSettings;

- (void).cxx_destruct;
- (id)cameraSettings;
- (unsigned long long)enabledResidentsDeviceCapabilities;
- (id)initWithHome:(id)arg1;
- (bool)isFaceClassificationEnabled;
- (bool)isOwner;
- (id)userSettings;

@end
