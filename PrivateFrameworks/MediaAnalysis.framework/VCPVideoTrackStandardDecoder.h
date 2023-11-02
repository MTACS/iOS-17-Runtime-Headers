
@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder {
    AVAssetReader * _assetReader;
    NSDictionary * _decoderSettings;
    struct opaqueCMSampleBuffer { } * _nextSample;
    long long  _status;
    AVAssetReaderTrackOutput * _trackOutput;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)initWithTrack:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 withSettings:(id)arg3 applyTransform:(bool)arg4;
- (long long)status;

@end
