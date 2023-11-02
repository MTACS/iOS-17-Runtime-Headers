
@interface HMDCameraSupportedConfigurationCache : HMFObject {
    HMDSupportedAudioStreamConfiguration * _supportedAudioStreamConfiguration;
    HMDSupportedRTPConfiguration * _supportedRTPConfiguration;
    HMDSupportedVideoStreamConfiguration * _supportedVideoStreamConfiguration;
}

@property (retain) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (retain) HMDSupportedRTPConfiguration *supportedRTPConfiguration;
@property (retain) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (getter=isValid, readonly) bool valid;

- (void).cxx_destruct;
- (bool)isValid;
- (void)setSupportedAudioStreamConfiguration:(id)arg1;
- (void)setSupportedRTPConfiguration:(id)arg1;
- (void)setSupportedVideoStreamConfiguration:(id)arg1;
- (id)supportedAudioStreamConfiguration;
- (id)supportedRTPConfiguration;
- (id)supportedVideoStreamConfiguration;

@end
