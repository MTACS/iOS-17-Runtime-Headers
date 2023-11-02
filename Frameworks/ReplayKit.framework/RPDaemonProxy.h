
@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPClientProtocol, RPDaemonProtocol> {
    NSURL * _broadcastURL;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSURL *broadcastURL;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)daemonProxy;

- (void).cxx_destruct;
- (id)broadcastURL;
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(bool)arg2;
- (oneway void)discardInAppRecordingWithHandler:(id /* block */)arg1;
- (oneway void)exportClipToURL:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)getSystemBroadcastExtensionInfo:(id /* block */)arg1;
- (oneway void)getSystemBroadcastPickerInfo:(id /* block */)arg1;
- (id)init;
- (id)issueSandboxExtensionForClientFileWrite:(id)arg1;
- (void)issueSandboxExtensionForMainBundleRead;
- (oneway void)macApplicationDidBecomeActiveWithContextID:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)macApplicationDidResignActive;
- (oneway void)openControlCenterSystemRecordingView;
- (oneway void)pauseInAppBroadcast;
- (oneway void)pauseInAppCapture;
- (oneway void)pauseInAppRecording;
- (oneway void)recordingDidPause;
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)recordingLockInterrupted:(id)arg1;
- (oneway void)recordingTimerDidUpdate:(id)arg1;
- (oneway void)reportCameraUsage:(long long)arg1;
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)resumeInAppClipWithWindowLayerContextID:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)resumeSystemBroadcastWithCompletionHandler:(id /* block */)arg1;
- (oneway void)resumeSystemRecordingWithCompletionHandler:(id /* block */)arg1;
- (oneway void)saveClipToCameraRoll:(id)arg1 handler:(id /* block */)arg2;
- (oneway void)saveVideo:(id)arg1 handler:(id /* block */)arg2;
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(id /* block */)arg2;
- (oneway void)setBroadcastPickerPreferredExt:(id)arg1 showsMicButton:(bool)arg2;
- (void)setBroadcastURL:(id)arg1;
- (void)setConnection:(id)arg1;
- (oneway void)setMicrophoneEnabled:(bool)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(id /* block */)arg5;
- (oneway void)setupSystemBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(id /* block */)arg5;
- (oneway void)shouldResumeSessionType:(id)arg1;
- (oneway void)startClipBufferingWithContextID:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
- (oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 listenerEndpoint:(id)arg5 withHandler:(id /* block */)arg6;
- (oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 withHandler:(id /* block */)arg5;
- (oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 withHandler:(id /* block */)arg5;
- (oneway void)startSystemBroadcastWithContextID:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 listenerEndpoint:(id)arg5 withHandler:(id /* block */)arg6;
- (oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 withHandler:(id /* block */)arg5;
- (oneway void)stopAllActiveClients;
- (oneway void)stopClipBufferingWithCompletionHandler:(id /* block */)arg1;
- (oneway void)stopCurrentActiveSessionWithHandler:(id /* block */)arg1;
- (oneway void)stopInAppBroadcastWithHandler:(id /* block */)arg1;
- (oneway void)stopInAppCaptureWithHandler:(id /* block */)arg1;
- (oneway void)stopInAppRecordingWithHandler:(id /* block */)arg1;
- (oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(id /* block */)arg2;
- (oneway void)stopSystemBroadcastWithHandler:(id /* block */)arg1;
- (oneway void)stopSystemRecordingWithHandler:(id /* block */)arg1;
- (oneway void)stopSystemRecordingWithURLHandler:(id /* block */)arg1;
- (oneway void)updateBroadcastServiceInfo:(id)arg1;
- (oneway void)updateBroadcastURL:(id)arg1;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;

@end
