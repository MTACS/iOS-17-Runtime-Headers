
@interface HMAccessoryProfile : NSObject <HFAccessoryLikeObjectRootHomeKitObjectProvider, HFAccessoryLikeObjectVendor, HFAccessoryRepresentable, HFFavoritable, HFHomeKitObject, HFHomeStatusVisible, HFIncludedContextProtocol, HFRoomContextProviding, HFShowInHomeDashboard, HFStateDumpBuildable, HMObjectMerge> {
    _HMAccessoryProfile * _accessoryProfile;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) _HMAccessoryProfile *accessoryProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFAccessoryLikeObject *hf_accessoryLikeObject;
@property (nonatomic, readonly) HFAccessoryType *hf_accessoryType;
@property (nonatomic, readonly) NSSet *hf_associatedAccessories;
@property (nonatomic, readonly) bool hf_canSpanMultipleRooms;
@property (nonatomic, readonly) NSSet *hf_containedCharacteristics;
@property (nonatomic, readonly) NSSet *hf_containedProfiles;
@property (nonatomic, readonly) NSSet *hf_containedServices;
@property (nonatomic, readonly) bool hf_effectiveIsFavorite;
@property (nonatomic, readonly) bool hf_effectiveShowInHomeDashboard;
@property (nonatomic, readonly) bool hf_hasNonStandardTileUI;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_hasSetShowInHomeDashboard;
@property (nonatomic, readonly) bool hf_hasSetVisibleInHomeStatus;
@property (nonatomic, readonly) <HFHomeKitObject> *hf_homeKitObject;
@property (nonatomic, readonly) <HFIconDescriptor> *hf_iconDescriptor;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isForcedVisibleInHomeStatus;
@property (nonatomic, readonly) bool hf_isIdentifiable;
@property (nonatomic, readonly) bool hf_isVisibleInHomeStatus;
@property (nonatomic, readonly) Class hf_itemClass;
@property (nonatomic, readonly) bool hf_offersAutomation;
@property (nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) <HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> *hf_rootAccessoryLikeHomeKitObject;
@property (nonatomic, readonly) HMRoom *hf_safeRoom;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_showInHomeDashboard;
@property (nonatomic, readonly) bool hf_supportsHomeStatus;
@property (nonatomic, readonly) NSString *hf_tileSize;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryProfile;
- (id)assistantIdentifier;
- (id)description;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessoryProfile:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (id)profileUniqueIdentifier;
- (void)recomputeAssistantIdentifier;
- (void)refreshStateWithCompletionHandler:(id /* block */)arg1;
- (id)services;
- (id)uniqueIdentifier;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_profilesWithNonStandardTileUI;

- (id)hf_accessoryLikeObject;
- (id)hf_accessoryType;
- (id)hf_associatedAccessories;
- (bool)hf_canSpanMultipleRooms;
- (id)hf_containedCharacteristics;
- (id)hf_containedProfiles;
- (id)hf_containedServices;
- (bool)hf_effectiveIsFavorite;
- (bool)hf_effectiveShowInHomeDashboard;
- (bool)hf_hasNonStandardTileUI;
- (bool)hf_hasSetFavorite;
- (bool)hf_hasSetForContextType:(unsigned long long)arg1;
- (bool)hf_hasSetShowInHomeDashboard;
- (bool)hf_hasSetVisibleInHomeStatus;
- (id)hf_homeKitObject;
- (id)hf_iconDescriptor;
- (bool)hf_isFavorite;
- (bool)hf_isForcedVisibleInHomeStatus;
- (bool)hf_isIdentifiable;
- (bool)hf_isInRoom:(id)arg1;
- (bool)hf_isOnForContextType:(unsigned long long)arg1;
- (bool)hf_isValidObject;
- (bool)hf_isVisibleInHomeStatus;
- (Class)hf_itemClass;
- (id)hf_moveToRoom:(id)arg1;
- (bool)hf_offersAutomation;
- (id)hf_parentRoom;
- (id)hf_rootAccessoryLikeHomeKitObject;
- (id)hf_safeRoom;
- (id)hf_serviceNameComponents;
- (id)hf_setTileSize:(id)arg1;
- (bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;
- (bool)hf_shouldHideForContextType:(unsigned long long)arg1;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_showInHomeDashboard;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (bool)hf_supportsHomeStatus;
- (id)hf_tileSize;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)hf_updateIsVisibleInHomeStatus:(bool)arg1;
- (id)hf_updateShowInHomeDashboard:(bool)arg1;
- (id)hf_updateValue:(bool)arg1 forContextType:(unsigned long long)arg2;

@end
