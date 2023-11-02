
@interface APRKStreamRecorder : NSObject {
    struct OpaqueFigAssetWriter { } * _assetWriter;
    int  _audioTrackID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _recordingStartTime;
    int  _videoTrackID;
}

- (int)_recordSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 toTrackWithID:(int)arg2;
- (bool)finalizeRecording;
- (int)recordAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)recordVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)startRecordingAtURL:(id)arg1;

@end
