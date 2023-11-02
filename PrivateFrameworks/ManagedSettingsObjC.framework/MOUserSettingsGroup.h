
@interface MOUserSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *denySharing;
@property (nonatomic, retain) NSNumber *denyUnrestrictedSharing;
@property (nonatomic, retain) NSString *sharingPolicy;

+ (id)denySharingMetadata;
+ (id)denyUnrestrictedSharingMetadata;
+ (id)groupName;
+ (id)sharingPolicyMetadata;

- (id)denySharing;
- (id)denyUnrestrictedSharing;
- (void)setDenySharing:(id)arg1;
- (void)setDenyUnrestrictedSharing:(id)arg1;
- (void)setSharingPolicy:(id)arg1;
- (id)sharingPolicy;

@end
