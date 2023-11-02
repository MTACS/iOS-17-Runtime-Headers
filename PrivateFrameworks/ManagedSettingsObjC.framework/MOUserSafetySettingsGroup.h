
@interface MOUserSafetySettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSSet *allowedClients;
@property (nonatomic, retain) MOUserSafetyScanningPolicy *scanningPolicy;

+ (id)allowedClientsMetadata;
+ (id)groupName;
+ (id)scanningPolicyMetadata;

- (id)allowedClients;
- (id)scanningPolicy;
- (void)setAllowedClients:(id)arg1;
- (void)setScanningPolicy:(id)arg1;

@end
