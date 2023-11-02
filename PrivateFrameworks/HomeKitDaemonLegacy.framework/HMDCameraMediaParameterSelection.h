
@interface HMDCameraMediaParameterSelection : HMDCameraParameterSelection {
    HMDCameraAudioParameterSelection * _audioParameterSelection;
    HMDCameraVideoParameterSelection * _videoParameterSelection;
}

@property (nonatomic, retain) HMDCameraAudioParameterSelection *audioParameterSelection;
@property (nonatomic, retain) HMDCameraVideoParameterSelection *videoParameterSelection;

- (void).cxx_destruct;
- (id)audioParameterSelection;
- (bool)findBestMatchWithProtocolParameters:(id)arg1 streamingCapabilities:(id)arg2 videoTierParameters:(id)arg3;
- (void)setAudioParameterSelection:(id)arg1;
- (void)setReselectedConfigParameters:(id)arg1 videoTier:(id)arg2;
- (void)setSelectedConfigParameters:(id)arg1;
- (void)setSelectedEndPointSetupParameters:(id)arg1 videoNetworkConfig:(id)arg2 audioNetworkConfig:(id)arg3;
- (void)setVideoParameterSelection:(id)arg1;
- (id)videoParameterSelection;

@end
