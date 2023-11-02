
@protocol MOVStreamReaderEnhancedAccess <NSObject>

@required

- (struct __CVBuffer { }*)nextPixelBufferForStream:(in NSString *)arg1 attachementsData:(out id*)arg2 timestamp:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 error:(out id*)arg4;
- (struct opaqueCMSampleBuffer { }*)nextSampleBufferForStream:(in NSString *)arg1 attachementsData:(out id*)arg2 timestamp:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 error:(out id*)arg4;
- (<MOVStreamReaderAudioStreamOutput> *)outputForAudioStream:(in NSString *)arg1 error:(out id*)arg2;
- (<MOVStreamReaderMetadataStreamOutput> *)outputForMetadataStream:(in NSString *)arg1 error:(out id*)arg2;
- (<MOVStreamReaderSceneStreamOutput> *)outputForSceneStream:(in NSString *)arg1 error:(out id*)arg2;
- (<MOVStreamReaderVideoStreamOutput> *)outputForVideoStream:(in NSString *)arg1 error:(out id*)arg2;

@end
