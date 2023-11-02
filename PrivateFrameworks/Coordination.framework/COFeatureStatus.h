
@interface COFeatureStatus : NSObject

+ (bool)isCOClusterEnabled;
+ (bool)isCoordinationEnabled;
+ (bool)isGlobalMessagingEnabled;
+ (bool)isGlobalTimersEnabled;
+ (bool)isOdeonSyncEnabled;
+ (bool)isSharedCompanionLinkClientEnabled;
+ (bool)isSlimBallotsEnabled;

@end
