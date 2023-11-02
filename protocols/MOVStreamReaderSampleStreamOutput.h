
@protocol MOVStreamReaderSampleStreamOutput <MOVStreamReaderBaseStreamOutput>

@required

- (struct opaqueCMSampleBuffer { }*)grabNextSampleBufferForStreamTimestamp:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 error:(out id*)arg2;
- (struct opaqueCMSampleBuffer { }*)nextSampleBufferForStreamAttachementsData:(out id*)arg1 timestamp:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(out id*)arg3;
- (NSString *)relatedStreamId;
- (NSString *)relationSpecifier;

@end
