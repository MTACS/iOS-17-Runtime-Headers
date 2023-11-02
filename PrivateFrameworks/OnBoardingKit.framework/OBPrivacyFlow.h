
@interface OBPrivacyFlow : OBFlow {
    OBBundle * _bundle;
    OBImage * _buttonIcon;
    bool  _buttonIconLoaded;
    NSString * _splashContentName;
    bool  _splashPListContainsLegacyStringKeys;
    NSDictionary * _splashPlist;
}

@property (nonatomic, retain) OBBundle *bundle;
@property (nonatomic, readonly) OBImage *buttonIcon;
@property (nonatomic, readonly) unsigned long long contentVersion;
@property (nonatomic, readonly) bool enablesGroupingInCombinedList;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedButtonCaption;
@property (nonatomic, readonly) NSString *localizedButtonTitle;
@property (nonatomic, readonly) NSAttributedString *localizedCombinedFooter;
@property (nonatomic, readonly) NSString *localizedCombinedHeader;
@property (nonatomic, readonly) NSArray *localizedContentList;
@property (nonatomic, readonly) NSString *localizedShortTitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isPersonallyIdentifiable, nonatomic, readonly) bool personallyIdentifiable;
@property (nonatomic, readonly) bool platformSupported;
@property (nonatomic, readonly) bool showInCombinedList;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
+ (id)_splashPlistFromBundle:(id)arg1 forContentName:(id)arg2;
+ (id)flowWithBundle:(id)arg1;

- (void).cxx_destruct;
- (id)_SKU;
- (id)_bestStringForKeyWithPrefix:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (id)_bundleImageNamed:(id)arg1;
- (bool)_conformsToRequirement:(id)arg1;
- (bool)_conformsToRequirements:(id)arg1;
- (id)_currentPlatform;
- (id)_deviceClass;
- (id)_iconType;
- (id)_legacyLocalizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(unsigned long long)arg4;
- (id)_splashPlist;
- (id)_stringForPlaceholderBundleWithString:(id)arg1;
- (id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (id)bundle;
- (id)buttonIcon;
- (unsigned long long)contentVersion;
- (bool)enablesGroupingInCombinedList;
- (id)identifier;
- (id)initWithBundle:(id)arg1;
- (id)initWithSplashContent:(id)arg1;
- (bool)isPersonallyIdentifiable;
- (id)localizedButtonCaption;
- (id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedButtonTitle;
- (id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedCombinedFooter;
- (id)localizedCombinedFooterForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedCombinedHeader;
- (id)localizedCombinedHeaderForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedContentList;
- (id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedShortTitle;
- (id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedTitle;
- (id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (bool)platformSupported;
- (void)setBundle:(id)arg1;
- (void)setButtonIcon:(id)arg1;
- (bool)showInCombinedList;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (unsigned long long)pk_privacyContentVersionForContext:(unsigned long long)arg1;
+ (id)pk_privacyFlowForContext:(unsigned long long)arg1;

@end
