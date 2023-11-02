
@protocol RPDaemonProtocol <NSObject>

@required

- (oneway void)consumeSandboxExtension:(NSString *)arg1 processNewConnection:(bool)arg2;
- (oneway void)discardInAppRecordingWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)exportClipToURL:(void *)arg1 duration:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)getSystemBroadcastExtensionInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (oneway void)getSystemBroadcastPickerInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (oneway void)macApplicationDidBecomeActiveWithContextID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)macApplicationDidResignActive;
- (oneway void)openControlCenterSystemRecordingView;
- (oneway void)pauseInAppBroadcast;
- (oneway void)pauseInAppCapture;
- (oneway void)pauseInAppRecording;
- (oneway void)reportCameraUsage:(long long)arg1;
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)resumeInAppClipWithWindowLayerContextID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)resumeSystemBroadcastWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)resumeSystemRecordingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)saveClipToCameraRoll:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)saveVideo:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)saveVideoToCameraRoll:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setBroadcastPickerPreferredExt:(NSString *)arg1 showsMicButton:(bool)arg2;
- (oneway void)setBroadcastURL:(NSURL *)arg1;
- (oneway void)setMicrophoneEnabled:(bool)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(void *)arg1 broadcastExtensionBundleID:(void *)arg2 broadcastConfigurationData:(void *)arg3 userInfo:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSData *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setupSystemBroadcastWithHostBundleID:(void *)arg1 broadcastExtensionBundleID:(void *)arg2 broadcastConfigurationData:(void *)arg3 userInfo:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSData *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)startClipBufferingWithContextID:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 cameraEnabled:(void *)arg4 withCompletionHandler:(void *)arg5; // needs 5 arg types, found 12: NSString *, struct CGSize { double x1; double x2; }, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)startInAppBroadcastWithContextID:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 cameraEnabled:(void *)arg4 listenerEndpoint:(void *)arg5 withHandler:(void *)arg6; // needs 6 arg types, found 13: NSString *, struct CGSize { double x1; double x2; }, bool, bool, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)startInAppCaptureWithContextID:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 cameraEnabled:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 12: NSString *, struct CGSize { double x1; double x2; }, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)startInAppRecordingWithContextID:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 cameraEnabled:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 12: NSString *, struct CGSize { double x1; double x2; }, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)startSystemBroadcastWithContextID:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 cameraEnabled:(void *)arg4 listenerEndpoint:(void *)arg5 withHandler:(void *)arg6; // needs 6 arg types, found 11: NSString *, struct CGSize { double x1; double x2; }, bool, bool, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)startSystemRecordingWithContextID:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 cameraEnabled:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, struct CGSize { double x1; double x2; }, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopAllActiveClients;
- (oneway void)stopClipBufferingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopCurrentActiveSessionWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)stopInAppBroadcastWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopInAppCaptureWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopInAppRecordingWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (oneway void)stopInAppRecordingWithUrl:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopSystemBroadcastWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopSystemRecordingWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopSystemRecordingWithURLHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;

@optional

- (oneway void)exportClipToURL:(void *)arg1 duration:(void *)arg2 extensionToken:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURL *, double, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)saveVideo:(void *)arg1 extensionToken:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)stopInAppRecordingWithUrl:(void *)arg1 extensionToken:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
