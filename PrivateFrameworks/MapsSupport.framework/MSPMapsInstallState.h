
@interface MSPMapsInstallState : NSObject {
    bool  _hasState;
    GEOObserverHashTable * _installStateObservers;
    bool  _mapsInstalled;
}

+ (bool)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;
+ (id)sharedState;

- (void).cxx_destruct;
- (bool)_fetchMapsAppInstallState;
- (bool)_isMapsAppInstalled;
- (void)dealloc;
- (id)init;
- (void)receivedChangeNotification:(id)arg1;
- (void)registerMapsInstallStateObserver:(id)arg1;
- (void)unregisterMapsInstallStateObserver:(id)arg1;

@end
