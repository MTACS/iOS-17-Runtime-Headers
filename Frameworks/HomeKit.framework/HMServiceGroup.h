
@interface HMServiceGroup : NSObject <HFAccessoryLikeObjectRootHomeKitObjectProvider, HFAccessoryLikeObjectVendor, HFAccessoryRepresentable, HFApplicationData, HFFavoritable, HFHomeKitObject, HFHomeStatusVisible, HFIncludedContextProtocol, HFReorderableHomeKitObject, HFServiceNameComponentsProviding, HFShowInHomeDashboard, HFStateDumpBuildable, HFUserNotificationServiceSettingsProviding, HMFLogging, HMMutableApplicationData, HMObjectMerge, HRERecommendableObjectProtocol, NSSecureCoding> {
    HMApplicationData * _applicationData;
    NSString * _assistantIdentifier;
    _HMContext * _context;
    HMMutableArray * _currentServices;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, retain) HMApplicationData *applicationData;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, retain) HMMutableArray *currentServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFAccessoryLikeObject *hf_accessoryLikeObject;
@property (nonatomic, readonly) HFAccessoryType *hf_accessoryType;
@property (nonatomic, readonly) bool hf_areAllServicesInSameRoom;
@property (nonatomic, readonly) NSSet *hf_associatedAccessories;
@property (nonatomic, readonly) bool hf_canSpanMultipleRooms;
@property (nonatomic, readonly) NSSet *hf_containedCharacteristics;
@property (nonatomic, readonly) NSSet *hf_containedProfiles;
@property (nonatomic, readonly) NSSet *hf_containedServices;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_effectiveIsFavorite;
@property (nonatomic, readonly) bool hf_effectiveShowInHomeDashboard;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_hasSetShowInHomeDashboard;
@property (nonatomic, readonly) bool hf_hasSetVisibleInHomeStatus;
@property (nonatomic, readonly) <HFHomeKitObject> *hf_homeKitObject;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isForcedVisibleInHomeStatus;
@property (nonatomic, readonly) bool hf_isIdentifiable;
@property (nonatomic, readonly) bool hf_isSupported;
@property (nonatomic, readonly) bool hf_isVisibleInHomeStatus;
@property (nonatomic, readonly) Class hf_itemClass;
@property (nonatomic, readonly) <HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> *hf_rootAccessoryLikeHomeKitObject;
@property (nonatomic, readonly) HMRoom *hf_safeRoom;
@property (nonatomic, readonly) HFServiceDescriptor *hf_serviceDescriptor;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_showInHomeDashboard;
@property (nonatomic, readonly) bool hf_supportsHomeStatus;
@property (nonatomic, readonly) NSString *hf_tileSize;
@property (nonatomic, readonly, copy) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSSet *hre_actionTypes;
@property (nonatomic, readonly) NSSet *hre_characteristics;
@property (nonatomic, readonly) HMHome *hre_home;
@property (nonatomic, readonly) bool hre_isActionable;
@property (nonatomic, readonly) bool hre_isMediaObject;
@property (nonatomic, readonly) bool hre_isVisible;
@property (nonatomic, readonly) NSSet *hre_matchingTypes;
@property (nonatomic, readonly) HMRoom *hre_parentRoom;
@property (nonatomic, readonly) NSString *hre_primaryType;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addOrRemove:(bool)arg1 service:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_recomputeAssistantIdentifier;
- (void)_removeServices:(id)arg1;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addService:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationData;
- (id)applicationDataIdentifier;
- (id)assistantIdentifier;
- (id)context;
- (id)currentServices;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)name;
- (void)recomputeAssistantIdentifier;
- (void)removeService:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)services;
- (void)setApplicationData:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentServices:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setName:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)_hf_allBulletinBoardNotifications;
- (id)hf_accessoryLikeObject;
- (id)hf_accessoryType;
- (bool)hf_areAllServicesInSameRoom;
- (id)hf_associatedAccessories;
- (bool)hf_canSpanMultipleRooms;
- (id)hf_containedCharacteristics;
- (id)hf_containedProfiles;
- (id)hf_containedServices;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (bool)hf_effectiveIsFavorite;
- (bool)hf_effectiveShowInHomeDashboard;
- (bool)hf_hasSetFavorite;
- (bool)hf_hasSetForContextType:(unsigned long long)arg1;
- (bool)hf_hasSetShowInHomeDashboard;
- (bool)hf_hasSetVisibleInHomeStatus;
- (id)hf_homeKitObject;
- (bool)hf_isFavorite;
- (bool)hf_isForcedVisibleInHomeStatus;
- (bool)hf_isIdentifiable;
- (bool)hf_isInRoom:(id)arg1;
- (bool)hf_isOnForContextType:(unsigned long long)arg1;
- (bool)hf_isSupported;
- (bool)hf_isValidObject;
- (bool)hf_isVisibleInHomeStatus;
- (Class)hf_itemClass;
- (id)hf_moveToRoom:(id)arg1;
- (void)hf_postUpdateApplicationDataNotification:(id)arg1 needCellReload:(bool)arg2;
- (id)hf_rootAccessoryLikeHomeKitObject;
- (id)hf_safeRoom;
- (id)hf_serviceDescriptor;
- (id)hf_serviceNameComponents;
- (id)hf_setTileSize:(id)arg1;
- (bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;
- (bool)hf_shouldHideForContextType:(unsigned long long)arg1;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_showInHomeDashboard;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (bool)hf_supportsHomeStatus;
- (id)hf_tileSize;
- (void)hf_updateApplicationData:(id)arg1 handleError:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)hf_updateApplicationData:(id)arg1 needCellReload:(bool)arg2 handleError:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)hf_updateIsVisibleInHomeStatus:(bool)arg1;
- (id)hf_updateShowInHomeDashboard:(bool)arg1;
- (id)hf_updateUserNotificationSettings:(id)arg1;
- (id)hf_updateValue:(bool)arg1 forContextType:(unsigned long long)arg2;
- (id)hf_userNotificationSettings;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (id)hre_actionTypes;
- (id)hre_characteristics;
- (id)hre_home;
- (bool)hre_isActionable;
- (bool)hre_isMediaObject;
- (bool)hre_isVisible;
- (id)hre_matchingTypes;
- (id)hre_parentRoom;
- (id)hre_primaryType;

@end
