
@interface WBSFeatureAvailability : NSObject

+ (bool)_isPasswordSharingAvailable;
+ (bool)_shouldShowChineseFeatures;
+ (bool)_shouldShowRussianFeatures;
+ (bool)isAirDropPasswordsEnabled;
+ (bool)isCustomizationSyncEnabled;
+ (bool)isDifferentPrivateBrowsingSearchEngineEnabled;
+ (bool)isEnhancedPrivateBrowsingEnabled;
+ (bool)isInternalInstall;
+ (bool)isLockedPrivateBrowsingEnabled;
+ (bool)isMoreSearchProviderSuggestionsEnabled;
+ (bool)isNewTabAndWindowSyncingEnabled;
+ (bool)isOngoingCredentialSharingEnabled;
+ (bool)isPerSiteSettingSyncEnabled;
+ (bool)isProfileStartPageCustomizationEnabled;
+ (bool)isReflectUserIntentInSearchEnabled;
+ (bool)isResponsiveCompletionListEnabled;
+ (bool)isSafariProfilesEnabled;
+ (bool)isSearchProviderEnabled:(unsigned long long)arg1;
+ (bool)isSearchUIRefinementsEnabled;
+ (bool)isShowURLsInURLAutocompleteDebugChannelEnabled;
+ (bool)isSiriReadThisEnabled;
+ (bool)isStartPageSettingSyncEnabled;
+ (bool)isStreamlinedCompletionListEnabled;
+ (bool)supportsURLCredentialStorageAccessControlGroups;
+ (void)toggleShowURLsInURLAutocompleteDebugChannel;
+ (bool)wantsAggressiveKeychainCredentialCaching;

@end
