
@interface NTKTimeTravelSettings : NSObject {
    NPSManager * _npsManager;
    NSObject<OS_dispatch_queue> * _prefsQueue;
    bool  _timeTravelEnabled;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (bool)_isTimeTravelEnabledInPreferences;
- (void)dealloc;
- (id)init;
- (bool)isTimeTravelEnabled;
- (void)setTimeTravelEnabled:(bool)arg1;

@end
