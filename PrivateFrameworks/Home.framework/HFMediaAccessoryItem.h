
@interface HFMediaAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFActionBuilderFactory, HFMediaAccessoryLikeItem, HFMediaAccessoryProtocol, HUTintColorProviding> {
    <HFHomeKitObject> * _homeKitObject;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    bool  _isItemInActionBuilder;
    long long  _mediaAccessoryItemType;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) NSSet *accessoriesSupportingSoftwareUpdate;
@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (nonatomic, readonly) bool allowsAppleMusicAccount;
@property (nonatomic, readonly) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (nonatomic) bool isItemInActionBuilder;
@property (nonatomic, readonly) long long mediaAccessoryItemType;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) <HFMediaValueSource> *mediaValueSource;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (nonatomic, readonly) NSSet *services;
@property (nonatomic, readonly) bool shouldShowMutedMicIcon;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMediaAction;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;
- (void)_decorateServiceLikeItemKeys:(id)arg1;
- (void)_decorateSettingsSyncKeys:(id)arg1;
- (void)_decorateWithMediaSessionKeys:(id)arg1;
- (void)_decorateWithMediaSystemSpecificKeys:(id)arg1;
- (void)_decorateWithSiriEndpointProfileSpecificKeys:(id)arg1;
- (void)_decorateWithSoftwareUpdateStateKeys:(id)arg1;
- (void)_decorateWithSymptomFixInFlightKeys:(id)arg1;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (bool)_hasOnboarded;
- (bool)_isDumbSpeaker;
- (bool)_isHAPCapableSpeaker;
- (bool)_isInstallingSoftwareUpdate;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessoriesSupportingSoftwareUpdate;
- (id)accessoryRepresentableObject;
- (bool)actionsMayRequireDeviceUnlock;
- (bool)allowsAppleMusicAccount;
- (id)commonSettingsManager;
- (bool)containsActions;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createControlItemsWithOptions:(id)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)description;
- (id)enableDoorbellChime:(bool)arg1;
- (id)home;
- (id)homeKitObject;
- (id)homeKitSettingsVendor;
- (unsigned long long)homePodVariant;
- (id)iconDescriptor:(id)arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2;
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2;
- (bool)isAirPort;
- (bool)isAnnounceEnabled;
- (bool)isAppleTV;
- (bool)isAudioAnalysisEnabled;
- (bool)isAudioReceiver;
- (bool)isContainedWithinItemGroup;
- (bool)isContainedWithinMediaSystem;
- (bool)isDoorbellChimeEnabled;
- (bool)isHomePod;
- (bool)isHomePodAndIsInMediaSystem;
- (bool)isHomePodMediaSystem;
- (bool)isHomePodStereoPair;
- (bool)isItemGroup;
- (bool)isItemInActionBuilder;
- (bool)isSiriDisabled;
- (bool)isSiriEndpointAccessory;
- (bool)isStandaloneHomePod;
- (long long)mediaAccessoryItemType;
- (id)mediaProfileContainer;
- (id)mediaProfileContainers;
- (id)mediaValueSource;
- (id)namingComponentForHomeKitObject;
- (unsigned long long)numberOfItemsContainedWithinGroup;
- (id)performStandardUpdateWithOptions:(id)arg1;
- (unsigned long long)preferredActionOnTap:(id)arg1;
- (id)profiles;
- (id)room;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)serviceNameComponents;
- (id)services;
- (id)setEnableAnnounce:(bool)arg1;
- (id)setEnableAudioAnalysis:(bool)arg1;
- (void)setIsItemInActionBuilder:(bool)arg1;
- (id)setSiriDisabled:(bool)arg1;
- (id)settings;
- (bool)shouldShowMutedMicIcon;
- (bool)supportsAlarmQuickControls;
- (bool)supportsCoordinationForAlarmsAndTimers;
- (bool)supportsMediaAction;
- (bool)supportsMediaQuickControls;
- (bool)supportsMultiUser;
- (bool)supportsPlaybackState;
- (bool)supportsTimerQuickControls;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_containedAccessories;
- (id)hu_containedServices;
- (id)hu_tintColor;

@end
