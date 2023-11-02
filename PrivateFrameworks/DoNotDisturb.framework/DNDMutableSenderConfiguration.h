
@interface DNDMutableSenderConfiguration : DNDSenderConfiguration

@property (nonatomic, copy) NSMutableSet *allowedContactGroups;
@property (nonatomic, copy) NSMutableSet *allowedContactTypes;
@property (nonatomic, copy) NSMutableSet *allowedContacts;
@property (nonatomic, copy) NSMutableSet *deniedContactGroups;
@property (nonatomic, copy) NSMutableSet *deniedContactTypes;
@property (nonatomic, copy) NSMutableSet *deniedContacts;
@property (nonatomic, copy) DNDBypassSettings *phoneCallBypassSettings;

- (void)removeAllowedContactMatchingContact:(id)arg1;
- (void)removeDeniedContactMatchingContact:(id)arg1;
- (void)setAllowedContactGroups:(id)arg1;
- (void)setAllowedContactTypes:(id)arg1;
- (void)setAllowedContacts:(id)arg1;
- (void)setDeniedContactGroups:(id)arg1;
- (void)setDeniedContactTypes:(id)arg1;
- (void)setDeniedContacts:(id)arg1;
- (void)setPhoneCallBypassSettings:(id)arg1;

@end
