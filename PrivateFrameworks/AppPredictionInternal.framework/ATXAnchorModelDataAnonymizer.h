
@interface ATXAnchorModelDataAnonymizer : NSObject

+ (void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)arg1 withSalt:(id)arg2;
+ (void)anonymizeMessage:(id)arg1;
+ (bool)isFirstPartyApp:(id)arg1;
+ (id)readDeviceSpecificSalt;
+ (id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2;
+ (bool)shouldAnonymizeActionType:(id)arg1 forBundleId:(id)arg2;
+ (bool)shouldAnonymizeBundle:(id)arg1;

@end
