
@interface WBSURLSpoofingMitigator : NSObject {
    bool  _UIShouldReflectCommittedURLInsteadOfCurrentURL;
    NSDate * _dateOfLastSuspiciousProvisionalNavigationInterruption;
    bool  _hasCommittedChromeInitiatedLoad;
    long long  _navigationSource;
    unsigned long long  _recentlyInterruptedNavigationCount;
    NSTimer * _timerForRevertingToCommittedURL;
    _WKUserInitiatedAction * _userInitiatedAction;
}

@property (nonatomic, readonly) bool UIShouldReflectCommittedURLInsteadOfCurrentURL;
@property (nonatomic) long long navigationSource;

+ (bool)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;

- (void).cxx_destruct;
- (bool)UIShouldReflectCommittedURLInsteadOfCurrentURL;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(bool)arg1;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)didCommitNavigation;
- (void)didFailProvisionalNavigationWithError:(id)arg1;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1;
- (long long)navigationSource;
- (void)setNavigationSource:(long long)arg1;
- (void)willStartNewBrowserChromeInitiatedNavigation;

@end
