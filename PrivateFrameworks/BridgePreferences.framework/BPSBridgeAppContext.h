
@interface BPSBridgeAppContext : NSObject {
    NRDevice * _activeDevice;
    PBBridgeCompanionController * _bridgeController;
    bool  _inWatchSetupFlow;
    NSDictionary * _installedWatchkitApps;
    bool  _isRestoringToKnownDevice;
    bool  _syncTrapEnabled;
    NSMutableDictionary * _watchAppInstallStates;
}

@property (nonatomic, retain) NRDevice *activeDevice;
@property (nonatomic, retain) PBBridgeCompanionController *bridgeController;
@property (nonatomic) bool inWatchSetupFlow;
@property (nonatomic, retain) NSDictionary *installedWatchkitApps;
@property (nonatomic, readonly) bool isRestoringToKnownDevice;
@property (nonatomic) bool syncTrapEnabled;
@property (nonatomic, retain) NSMutableDictionary *watchAppInstallStates;

+ (id)shared;

- (void).cxx_destruct;
- (id)activeDevice;
- (id)bridgeController;
- (bool)inWatchSetupFlow;
- (id)installedWatchkitApps;
- (bool)isInWatchSetupFlow;
- (bool)isRestoringToKnownDevice;
- (bool)isSyncTrapEnabled;
- (void)setActiveDevice:(id)arg1;
- (void)setBridgeController:(id)arg1;
- (void)setInWatchSetupFlow:(bool)arg1;
- (void)setInstalledWatchkitApps:(id)arg1;
- (void)setSyncTrapEnabled:(bool)arg1;
- (void)setWatchAppInstallStates:(id)arg1;
- (bool)syncTrapEnabled;
- (void)tellWatchToSetSiriEnabled:(bool)arg1;
- (void)updateIsRestoringToKnownDevice:(bool)arg1;
- (id)watchAppInstallStates;

@end
