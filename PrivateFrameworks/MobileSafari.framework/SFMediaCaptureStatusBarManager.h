
@interface SFMediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    SBSStatusBarStyleOverridesCoordinator * _coordinator;
    bool  _hasStatusBarOverride;
    <SFMediaRecordingDocument> * _recordingDocument;
    SBSStatusBarStyleOverridesAssertion * _statusBarStyleOverride;
    NSString * _statusString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_hasStatusBarOverride, nonatomic, readonly) bool hasStatusBarOverride;
@property (readonly) unsigned long long hash;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (getter=_recordingDocument, nonatomic, readonly) <SFMediaRecordingDocument> *recordingDocument;
@property (nonatomic, readonly, copy) NSString *simplifiedURLString;
@property (nonatomic, readonly, copy) NSString *statusString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireStatusBarOverride;
- (void)_acquireStatusBarOverrideWithAudioOnly:(bool)arg1;
- (void)_cleanUpStatusBarOverride;
- (void)_didAcquireStatusBarOverrideSuccessfully:(bool)arg1;
- (void)_didInvalidateStatusBarOverride;
- (bool)_hasStatusBarOverride;
- (id)_recordingDocument;
- (void)_releaseStatusBarOverride;
- (void)activateApp;
- (void)cancelStatusBarOverride;
- (bool)isRecording;
- (unsigned long long)overrideStyleForAudioOnly:(bool)arg1;
- (void)recordingDocumentDidBeginMediaCapture:(id)arg1 audioOnly:(bool)arg2;
- (void)recordingDocumentDidEndMediaCapture:(id)arg1;
- (void)setRecordingDocument:(id)arg1;
- (id)simplifiedURLString;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)statusString;

@end
