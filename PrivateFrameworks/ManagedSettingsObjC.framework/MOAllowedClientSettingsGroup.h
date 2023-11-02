
@interface MOAllowedClientSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) MOApplication *allowedClient;
@property (nonatomic, retain) NSNumber *denyMDMEnrollment;
@property (nonatomic, retain) NSSet *tokenKeys;

+ (id)allowedClientMetadata;
+ (id)denyMDMEnrollmentMetadata;
+ (id)groupName;
+ (id)tokenKeysMetadata;

- (id)allowedClient;
- (id)denyMDMEnrollment;
- (void)setAllowedClient:(id)arg1;
- (void)setDenyMDMEnrollment:(id)arg1;
- (void)setTokenKeys:(id)arg1;
- (id)tokenKeys;

@end
