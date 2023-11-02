
@interface TCSAvailability : NSObject {
    NPSManager * _npsManager;
    bool  _shouldObserveFriendListDefaultChanges;
    bool  _shouldObserveUnavailabilityDefaultChanges;
    bool  _shouldShowStatusIndicator;
    NSUserDefaults * _tinCanDefaults;
}

@property (nonatomic) bool shouldObserveFriendListDefaultChanges;
@property (nonatomic) bool shouldObserveUnavailabilityDefaultChanges;
@property (nonatomic) bool shouldShowStatusIndicator;

+ (bool)isUserAvailable;
+ (void)setUserAvailable:(bool)arg1;
+ (id)sharedInstance;
+ (bool)shouldShowWalkieTalkieStatusIndicator;

- (void).cxx_destruct;
- (bool)_calculateShouldShowStatusIndicator;
- (void)_handleDeviceFirstUnlock;
- (bool)_hasConnectivity;
- (bool)_isUserUnavailable;
- (void)_postNotificationName:(id)arg1;
- (void)_setUserUnavailable:(bool)arg1;
- (id)_unavailabilityText:(bool)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setShouldObserveFriendListDefaultChanges:(bool)arg1;
- (void)setShouldObserveUnavailabilityDefaultChanges:(bool)arg1;
- (void)setShouldShowStatusIndicator:(bool)arg1;
- (bool)shouldObserveFriendListDefaultChanges;
- (bool)shouldObserveUnavailabilityDefaultChanges;
- (bool)shouldShowStatusIndicator;

@end
