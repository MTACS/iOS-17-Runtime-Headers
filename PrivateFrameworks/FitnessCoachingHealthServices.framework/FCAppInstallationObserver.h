
@interface FCAppInstallationObserver : NSObject {
    FCCAppInstallationUtility * _appInstallationUtility;
    bool  _isAppInstalled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

@property (nonatomic, readonly) bool fitnessAppInstalled;

- (void).cxx_destruct;
- (void)_applicationsInstalled:(id)arg1;
- (void)_applicationsUninstalled:(id)arg1;
- (void)_setAppInstalled:(bool)arg1;
- (void)_updateApplicationInstalled;
- (bool)fitnessAppInstalled;
- (id)init;

@end
