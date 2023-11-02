
@interface MOApplicationSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSSet *blockedApplications;
@property (nonatomic, retain) NSNumber *denyAppInstallation;
@property (nonatomic, retain) NSNumber *denyAppRemoval;
@property (nonatomic, retain) NSSet *unremovableApplications;

+ (id)blockedApplicationsMetadata;
+ (id)denyAppInstallationMetadata;
+ (id)denyAppRemovalMetadata;
+ (id)groupName;
+ (id)unremovableApplicationsMetadata;

- (id)blockedApplications;
- (id)denyAppInstallation;
- (id)denyAppRemoval;
- (void)setBlockedApplications:(id)arg1;
- (void)setDenyAppInstallation:(id)arg1;
- (void)setDenyAppRemoval:(id)arg1;
- (void)setUnremovableApplications:(id)arg1;
- (id)unremovableApplications;

@end
