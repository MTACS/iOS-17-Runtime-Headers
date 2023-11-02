
@protocol HFAccessoryRepresentable <NSObject, HFServiceNameComponentsProviding, HFFavoritable, HFHomeStatusVisible, HFShowInHomeDashboard, HFTileResizable>

@required

- (HFAccessoryType *)hf_accessoryType;
- (NSSet *)hf_associatedAccessories;
- (bool)hf_canSpanMultipleRooms;
- (NSSet *)hf_containedCharacteristics;
- (NSSet *)hf_containedProfiles;
- (NSSet *)hf_containedServices;
- (<HFHomeKitObject> *)hf_homeKitObject;
- (bool)hf_isIdentifiable;
- (bool)hf_isInRoom:(HMRoom *)arg1;
- (Class)hf_itemClass;
- (NAFuture *)hf_moveToRoom:(HMRoom *)arg1;
- (HMRoom *)hf_safeRoom;

@end
