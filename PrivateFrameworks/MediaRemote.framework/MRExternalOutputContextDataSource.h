
@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    bool  _groupVolumeMuted;
    float  _masterVolume;
    unsigned int  _masterVolumeControlCapabilities;
    NSMutableArray * _outputDevices;
    NSString * _uniqueIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)initializeVolumeCapabilitiesForLegacyCleints;
- (bool)isVolumeMuted;
- (id)outputDevices;
- (void)removeAllOutputDevices;
- (void)removeOutputDevices:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateOutputDevices:(id)arg1;
- (void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1 outputDeviceUID:(id)arg2;
- (void)updateVolumeMuted:(bool)arg1 outputDeviceUID:(id)arg2;
- (float)volume;
- (unsigned int)volumeControlCapabilities;

@end
