
@interface DMTSharingDevice : CATSharingDevice {
    SFDevice * _sharingDevice;
}

@property (nonatomic, readonly) SFDevice *sharingDevice;

+ (bool)deviceIsPairedAccordingToFlags:(unsigned int)arg1;
+ (unsigned long long)devicePairingStateFromSFPairState:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (id)sharingDevice;
- (id)underlyingDevice;

@end
