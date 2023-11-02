
@interface RecordingManager : NSObject <MOVWriterInterfaceDelegate> {
    NSString * _colorStreamID;
    <RecordingManagerDelegate> * _delegate;
    NSString * _depthStreamID;
    MOVWriterInterface * _writerInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RecordingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)copyBuffer:(struct __CVBuffer { }*)arg1 dst:(struct __CVBuffer { }*)arg2;
+ (id)movSummaryItem:(float)arg1 appName:(id)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (void)didFinishRecording;
- (id)initWithFileURL:(id)arg1 expectedFrameRate:(double)arg2 colorStreamId:(id)arg3 depthStreamId:(id)arg4 appName:(id)arg5;
- (void)isReadyToRecord;
- (bool)process:(struct __CVBuffer { }*)arg1 depthFrame:(struct __CVBuffer { }*)arg2 faceObject:(id)arg3 timestamp:(double)arg4 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 calibration:(id)arg6 exposureTime:(double)arg7;
- (void)setDelegate:(id)arg1;
- (void)stopRecording;

@end
