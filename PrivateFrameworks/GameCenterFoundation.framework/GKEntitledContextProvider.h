
@interface GKEntitledContextProvider : NSObject

+ (id)getCurrentDeviceName;
+ (bool)hasAnyGameCenterEntitlement;
+ (bool)hasBooleanPublicGameCenterEntitlement;
+ (bool)isEntitledToUseGroupActivities;

- (id)init;

@end
