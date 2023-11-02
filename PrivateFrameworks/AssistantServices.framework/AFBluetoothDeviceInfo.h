
@interface AFBluetoothDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    NSUUID * _deviceUID;
    bool  _isAdvancedAppleAudioDevice;
    NSString * _name;
    unsigned int  _productID;
    bool  _supportsAnnounceCall;
    bool  _supportsInEarDetection;
    bool  _supportsJustSiri;
    bool  _supportsListeningModeANC;
    bool  _supportsListeningModeAutomatic;
    bool  _supportsListeningModeTransparency;
    bool  _supportsSpokenNotification;
    bool  _supportsVoiceTrigger;
    unsigned int  _vendorID;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly, copy) NSUUID *deviceUID;
@property (nonatomic, readonly) bool isAdvancedAppleAudioDevice;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int productID;
@property (nonatomic, readonly) bool supportsAnnounceCall;
@property (nonatomic, readonly) bool supportsInEarDetection;
@property (nonatomic, readonly) bool supportsJustSiri;
@property (nonatomic, readonly) bool supportsListeningModeANC;
@property (nonatomic, readonly) bool supportsListeningModeAutomatic;
@property (nonatomic, readonly) bool supportsListeningModeTransparency;
@property (nonatomic, readonly) bool supportsSpokenNotification;
@property (nonatomic, readonly) bool supportsVoiceTrigger;
@property (nonatomic, readonly) unsigned int vendorID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddress:(id)arg1 name:(id)arg2 deviceUID:(id)arg3 vendorID:(unsigned int)arg4 productID:(unsigned int)arg5 isAdvancedAppleAudioDevice:(bool)arg6 supportsInEarDetection:(bool)arg7 supportsVoiceTrigger:(bool)arg8 supportsJustSiri:(bool)arg9 supportsSpokenNotification:(bool)arg10 supportsListeningModeANC:(bool)arg11 supportsListeningModeTransparency:(bool)arg12 supportsListeningModeAutomatic:(bool)arg13 supportsAnnounceCall:(bool)arg14;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAdvancedAppleAudioDevice;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)name;
- (unsigned int)productID;
- (bool)supportsAnnounceCall;
- (bool)supportsInEarDetection;
- (bool)supportsJustSiri;
- (bool)supportsListeningModeANC;
- (bool)supportsListeningModeAutomatic;
- (bool)supportsListeningModeTransparency;
- (bool)supportsSpokenNotification;
- (bool)supportsVoiceTrigger;
- (unsigned int)vendorID;

@end
