
@interface ARScreenRecording : NSObject <RPScreenRecorderDelegate> {
    RPScreenRecorder * _recorder;
    bool  _saveInPhotosLibrary;
    bool  _startRecordingRequested;
    NSURL * temporaryOutputURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RPScreenRecorder *recorder;
@property (nonatomic) bool saveInPhotosLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)recorder;
- (void)removeTemporaryOutputFile;
- (bool)saveInPhotosLibrary;
- (void)screenRecorderDidChangeAvailability:(id)arg1;
- (void)setRecorder:(id)arg1;
- (void)setSaveInPhotosLibrary:(bool)arg1;
- (void)startRecordingWithHandler:(id /* block */)arg1;
- (void)stopRecordingWithHandler:(id /* block */)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;

@end
