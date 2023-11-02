
@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (nonatomic, retain) STLocalOrganization *organization;
@property (nonatomic, copy) NSString *recoveryAltDSID;

- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
