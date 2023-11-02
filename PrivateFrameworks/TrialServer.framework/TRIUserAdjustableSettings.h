
@interface TRIUserAdjustableSettings : NSObject

+ (void)_deactivateAllActiveExperimentsWithServerContext:(id)arg1;
+ (unsigned char)_optOutSoftwareUpdatePreferenceForAnyUser;
+ (bool)getExperimentOptOut:(id)arg1;
+ (void)updateExperimentOptOutStateWithServerContext:(id)arg1;

@end
