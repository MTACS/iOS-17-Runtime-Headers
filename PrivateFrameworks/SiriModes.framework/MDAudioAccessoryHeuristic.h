
@interface MDAudioAccessoryHeuristic : NSObject <MDModeHeuristic> {
    AFNotifyObserver * _connectedOutputDevicesObserver;
    bool  _connectedToAudioAccessory;
    MDModeDecision * _modeDecisionBasedOnAudioAccessory;
    AVOutputContext * _sharedSystemAudioContext;
}

- (void).cxx_destruct;
- (void)_connectedOutputDevicesDidChange:(id)arg1;
- (void)_fetchConnectedAudioAccessoryState;
- (id)determineCurrentMode;
- (id)init;
- (bool)isConnectedToAudioAccessory;

@end
