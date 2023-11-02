
@interface WBSPrivateBrowsingExplanationConfiguration : NSObject {
    long long  _biometryType;
    WBSPrivacyProxyAvailabilityManager * _privacyProxyAvailabilityManager;
    WBSSearchProvider * _privateBrowsingSearchEngine;
    bool  _userHasPassword;
}

@property (nonatomic) long long biometryType;
@property (nonatomic, retain) WBSPrivacyProxyAvailabilityManager *privacyProxyAvailabilityManager;
@property (nonatomic, retain) WBSSearchProvider *privateBrowsingSearchEngine;
@property (nonatomic) bool userHasPassword;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (void).cxx_destruct;
- (long long)biometryType;
- (id)privacyProxyAvailabilityManager;
- (id)privateBrowsingSearchEngine;
- (void)setBiometryType:(long long)arg1;
- (void)setPrivacyProxyAvailabilityManager:(id)arg1;
- (void)setPrivateBrowsingSearchEngine:(id)arg1;
- (void)setUserHasPassword:(bool)arg1;
- (bool)userHasPassword;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)defaultConfiguration;

@end
