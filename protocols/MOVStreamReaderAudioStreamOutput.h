
@protocol MOVStreamReaderAudioStreamOutput <MOVStreamReaderSampleStreamOutput>

@required

- (struct opaqueCMSampleBuffer { }*)grabNextAudioSampleForStreamTimestamp:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 error:(out id*)arg2;

@end
