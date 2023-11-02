
@interface _CIDVRGBAVSessionManager : _CIDVRGBAVSessionManagerBase <AVCaptureDataOutputSynchronizerDelegate, AVCapturePhotoCaptureDelegate, CIDVRGBAVCaptureFileOutputDelegate> {
    AVCaptureDataOutputSynchronizer * _dataSynchronizer;
    CIDVRGBAVCaptureFileOutput * _fileOutput;
    unsigned long long  _fps;
    bool  _hasReceivedFirstFrame;
    AVCaptureMetadataOutput * _metadataOutput;
    AVCapturePhotoOutput * _photoOutput;
    bool  _shouldWriteFrame;
    AVCaptureVideoDataOutput * _videoOutput;
    NSArray * lastFrameFaces;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_facesFromMetadataDictionary:(id)arg1;
- (id)buildAVSessionCaptureOutputs;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingAtURL:(id)arg2 error:(id)arg3;
- (void)capturePhotoUsingFlashMode:(long long)arg1;
- (void)configureAVSessionCaptureOutputs;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getCurrentTimestamp;
- (void)invalidateAVSession;
- (void)pauseFileRecording;
- (void)restartFileRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)resumeFileRecording;
- (void)startAVSession;
- (void)stopAVSession;
- (void)stopFileRecording;

@end
