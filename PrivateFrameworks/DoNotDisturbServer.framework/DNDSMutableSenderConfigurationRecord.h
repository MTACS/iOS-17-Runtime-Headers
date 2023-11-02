
@interface DNDSMutableSenderConfigurationRecord : DNDSSenderConfigurationRecord

@property (nonatomic, copy) NSSet *allowedContactGroups;
@property (nonatomic, copy) NSSet *allowedContactTypes;
@property (nonatomic, copy) NSSet *allowedContacts;
@property (nonatomic, copy) NSSet *deniedContactGroups;
@property (nonatomic, copy) NSSet *deniedContactTypes;
@property (nonatomic, copy) NSSet *deniedContacts;
@property (nonatomic, copy) DNDSBypassSettingsRecord *phoneCallBypassSettings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAllowedContactGroups:(id)arg1;
- (void)setAllowedContactTypes:(id)arg1;
- (void)setAllowedContacts:(id)arg1;
- (void)setDeniedContactGroups:(id)arg1;
- (void)setDeniedContactTypes:(id)arg1;
- (void)setDeniedContacts:(id)arg1;
- (void)setPhoneCallBypassSettings:(id)arg1;

@end
