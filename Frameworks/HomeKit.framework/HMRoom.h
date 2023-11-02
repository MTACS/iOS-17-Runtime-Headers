
@interface HMRoom : NSObject <HFAccessoryLikeObjectContainer, HFApplicationData, HFDemoModeAccessoryContainer, HFHomeKitObject, HFReorderableHomeKitObject, HFStateDumpBuildable, HFWallaperHost, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    HMApplicationData * _applicationData;
    NSString * _assistantIdentifier;
    _HMContext * _context;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, retain) HMApplicationData *applicationData;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *hf_accessoryLikeObjects;
@property (nonatomic, readonly) NSArray *hf_allCameraProfiles;
@property (nonatomic, readonly) NSArray *hf_allServices;
@property (nonatomic, readonly) NSSet *hf_allUniqueMediaProfileContainersExcludingMediaGroups;
@property (nonatomic, readonly) NSSet *hf_allVisibleServices;
@property (nonatomic, readonly) NSArray *hf_allZones;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly) NSArray *hf_demoModeAccessories;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_hasAtleastOneHomePod;
@property (nonatomic, readonly) bool hf_hasAtleastOneReachableHomePod;
@property (nonatomic, readonly) bool hf_hasVisibleAccessories;
@property (nonatomic, readonly) NSArray *hf_homePodPairsNotInHomeTheaterGroup;
@property (nonatomic, readonly) NSArray *hf_homePodsNotInHomeTheaterGroup;
@property (nonatomic, readonly) NSArray *hf_pairedHomePods;
@property (nonatomic, readonly) bool hf_shouldShowAnnounceButtonForThisRoom;
@property (nonatomic, readonly) bool hf_shouldShowAnnounceFeatureForThisRoom;
@property (nonatomic, readonly) HMCameraProfile *hf_unitaryCameraProfile;
@property (nonatomic, readonly) NSArray *hf_visibleAccessories;
@property (nonatomic, readonly) UIImage *hf_wallpaperImage;
@property (nonatomic, readonly) NSArray *hmu_homePods;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_recomputeAssistantIdentifier;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accessories;
- (id)applicationData;
- (id)applicationDataIdentifier;
- (id)assistantIdentifier;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (id)name;
- (void)recomputeAssistantIdentifier;
- (void)setApplicationData:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

+ (id)an_roomsWithAnnounceAccessoriesFromRooms:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void)_hf_updateApplicationData:(id)arg1;
- (id)availableHomePodsSupportingStereoPairingVersions:(unsigned long long)arg1;
- (id)availableHomeTheaterMediaPartnerFor:(id)arg1;
- (id)hf_accessoryLikeObjects;
- (id)hf_accessoryRepresentableUsageCountsWithFilter:(id /* block */)arg1;
- (id)hf_allCameraProfiles;
- (id)hf_allNonEmptyActionSets;
- (id)hf_allServices;
- (id)hf_allUniqueMediaProfileContainersExcludingMediaGroups;
- (id)hf_allVisibleServices;
- (id)hf_allZones;
- (bool)hf_atleastOneHomePodSupportsAnnounce;
- (bool)hf_atleastOneMediaAccessorySupportsAndHasAnnounceEnabled;
- (id /* block */)hf_dashboardSectionReorderableUUIDStringComparator;
- (id)hf_dateAdded;
- (id)hf_demoModeAccessories;
- (id)hf_displayName;
- (bool)hf_hasAtleastOneHomePod;
- (bool)hf_hasAtleastOneReachableHomePod;
- (bool)hf_hasVisibleAccessories;
- (id)hf_homePodPairsNotInHomeTheaterGroup;
- (id)hf_homePodsNotInHomeTheaterGroup;
- (id)hf_pairedHomePods;
- (id)hf_reorderableDashboardSectionList;
- (id)hf_reorderableServicesList;
- (id)hf_roomsSortDescriptorUsingDashboardSectionOrder;
- (bool)hf_shouldShowAnnounceButtonForThisRoom;
- (bool)hf_shouldShowAnnounceFeatureForThisRoom;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_unitaryCameraProfile;
- (void)hf_updateApplicationData:(id)arg1 handleError:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateWallpaperImage:(id)arg1;
- (id)hf_visibleAccessories;
- (id)hf_wallpaperImage;

// Image: /System/Library/PrivateFrameworks/HomeMessagingUtils.framework/HomeMessagingUtils

+ (id)hmu_accessoriesInRooms:(id)arg1;
+ (id)hmu_roomsWithAnnounceAccessoriesFromRooms:(id)arg1;
+ (id)hmu_roomsWithHomePodsFromRooms:(id)arg1;
+ (id)hmu_uniqueIdentifiersFromRooms:(id)arg1;

- (id)hmu_homePods;

@end
