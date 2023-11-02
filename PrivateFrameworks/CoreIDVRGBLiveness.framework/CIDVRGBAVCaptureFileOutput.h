
@interface CIDVRGBAVCaptureFileOutput : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTimestamp;
    <CIDVRGBAVCaptureFileOutputDelegate> * _delegate;
    NSString * _fileName;
    NSString * _fileType;
    NSURL * _outputFile;
    bool  _recording;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    NSDictionary * _videoSettings;
    AVAssetWriter * _writer;
    AVAssetWriterInput * _writerInput;
}

@property (nonatomic) <CIDVRGBAVCaptureFileOutputDelegate> *delegate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (void).cxx_destruct;
- (bool)_errorIsFileExists:(id)arg1;
- (unsigned long long)_freeDiskSpaceInBytes;
- (void)_removeOutputFile;
- (void)_restartRecording;
- (id)delegate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getCurrentTimestamp;
- (id)initWithVideoOutput:(id)arg1;
- (void)invalidateRecording;
- (void)recordFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)restartRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startRecording;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (void)stopRecording;

@end
