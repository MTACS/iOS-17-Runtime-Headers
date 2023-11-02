
@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating> {
    NSString * _address;
    AFBluetoothDeviceInfo * _base;
    NSUUID * _deviceUID;
    bool  _isAdvancedAppleAudioDevice;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAddress : 1; 
        unsigned int hasName : 1; 
        unsigned int hasDeviceUID : 1; 
        unsigned int hasVendorID : 1; 
        unsigned int hasProductID : 1; 
        unsigned int hasIsAdvancedAppleAudioDevice : 1; 
        unsigned int hasSupportsInEarDetection : 1; 
        unsigned int hasSupportsVoiceTrigger : 1; 
        unsigned int hasSupportsJustSiri : 1; 
        unsigned int hasSupportsSpokenNotification : 1; 
        unsigned int hasSupportsListeningModeANC : 1; 
        unsigned int hasSupportsListeningModeTransparency : 1; 
        unsigned int hasSupportsListeningModeAutomatic : 1; 
        unsigned int hasSupportsAnnounceCall : 1; 
    }  _mutationFlags;
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

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAddress;
- (id)getDeviceUID;
- (bool)getIsAdvancedAppleAudioDevice;
- (id)getName;
- (unsigned int)getProductID;
- (bool)getSupportsAnnounceCall;
- (bool)getSupportsInEarDetection;
- (bool)getSupportsJustSiri;
- (bool)getSupportsListeningModeANC;
- (bool)getSupportsListeningModeAutomatic;
- (bool)getSupportsListeningModeTransparency;
- (bool)getSupportsSpokenNotification;
- (bool)getSupportsVoiceTrigger;
- (unsigned int)getVendorID;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAddress:(id)arg1;
- (void)setDeviceUID:(id)arg1;
- (void)setIsAdvancedAppleAudioDevice:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setSupportsAnnounceCall:(bool)arg1;
- (void)setSupportsInEarDetection:(bool)arg1;
- (void)setSupportsJustSiri:(bool)arg1;
- (void)setSupportsListeningModeANC:(bool)arg1;
- (void)setSupportsListeningModeAutomatic:(bool)arg1;
- (void)setSupportsListeningModeTransparency:(bool)arg1;
- (void)setSupportsSpokenNotification:(bool)arg1;
- (void)setSupportsVoiceTrigger:(bool)arg1;
- (void)setVendorID:(unsigned int)arg1;

@end
