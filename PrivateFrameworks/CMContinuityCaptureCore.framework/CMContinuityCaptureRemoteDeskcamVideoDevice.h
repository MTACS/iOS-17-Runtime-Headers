
@interface CMContinuityCaptureRemoteDeskcamVideoDevice : CMContinuityCaptureRemoteVideoDevice

- (bool)_companionConnectionsRequired;
- (void)_forcefullyEnableCenterStageOnSuperWide;
- (void)_restoreStatesAfterForcefulCenterStageEnablementAndShouldReconfigureCaptureStack:(bool)arg1;
- (bool)_shouldOnlyDisableVideoConnection;
- (bool)configureConnections;
- (id)connectionsForConfiguration:(id)arg1;
- (bool)isStreamingOnSuperWide;

@end
