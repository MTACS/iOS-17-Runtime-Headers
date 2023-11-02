
@interface CDPUtilities : NSObject

+ (bool)canEnableMultiUserManatee;
+ (bool)deferSOSFromSignIn;
+ (bool)hasFullCDPSupport;
+ (bool)isAudioAccessory;
+ (bool)isInternalBuild;
+ (bool)isMultiUserManateeFeatureEnabled;
+ (bool)isSilentEscrowRecordViabilityRepairEnabled;

@end
