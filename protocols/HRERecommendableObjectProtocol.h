
@protocol HRERecommendableObjectProtocol <NSObject>

@required

- (NSSet *)hre_actionTypes;
- (NSSet *)hre_characteristics;
- (HMHome *)hre_home;
- (bool)hre_isActionable;
- (bool)hre_isMediaObject;
- (bool)hre_isVisible;
- (NSSet *)hre_matchingTypes;
- (HMRoom *)hre_parentRoom;
- (NSString *)hre_primaryType;

@end
