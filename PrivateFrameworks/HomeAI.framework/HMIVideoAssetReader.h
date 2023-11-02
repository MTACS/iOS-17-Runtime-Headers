
@interface HMIVideoAssetReader : HMIVideoNode <HMFLogging> {
    AVAsset * _asset;
    AVAssetReader * _assetReader;
    NSMutableArray * _trackOutputs;
    struct __CFArray { } * _trackSamples;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)_copyNextSampleBufferFromTrackOutput:(id)arg1;
- (bool)_createOutputsForAsset:(id)arg1 readVideo:(bool)arg2 readAudio:(bool)arg3;
- (bool)checkAndSaveCrashReportWithData:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBufferWithTrackIndexOutput:(unsigned long long*)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 readVideoTrack:(bool)arg2 readAudioTrack:(bool)arg3;

@end
