
@interface VCPVideoTrackDecoder : NSObject {
    AVAssetTrack * _track;
}

+ (struct { int x1; int x2; })decodeDimensionsForTrack:(id)arg1;

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { }*)getNextCaptureSampleBuffer;
- (id)init;
- (id)initWithTrack:(id)arg1;
- (id)settings;
- (long long)status;
- (bool)validateDecodedFrame:(struct __CVBuffer { }*)arg1 withSettings:(id)arg2;

@end
