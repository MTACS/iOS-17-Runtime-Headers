
@interface MDDeviceIsMutedHeuristic : NSObject <MDModeHeuristic> {
    MDModeDecision * _displayOnlyModeDecision;
    AFNotifyObserver * _ringerStateObserver;
}

- (void).cxx_destruct;
- (id)determineCurrentMode;
- (id)init;
- (id)initWithRingerStateObserver:(id)arg1;
- (bool)isDeviceSilentMode;

@end
