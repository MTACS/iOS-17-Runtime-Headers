
@interface DNDSSenderConfigurationRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSSet * _allowedContactGroups;
    NSSet * _allowedContactTypes;
    NSSet * _allowedContacts;
    NSSet * _deniedContactGroups;
    NSSet * _deniedContactTypes;
    NSSet * _deniedContacts;
    DNDSBypassSettingsRecord * _phoneCallBypassSettings;
}

@property (nonatomic, readonly, copy) NSSet *allowedContactGroups;
@property (nonatomic, readonly, copy) NSSet *allowedContactTypes;
@property (nonatomic, readonly, copy) NSSet *allowedContacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSSet *deniedContactGroups;
@property (nonatomic, readonly, copy) NSSet *deniedContactTypes;
@property (nonatomic, readonly, copy) NSSet *deniedContacts;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithAllowedContactTypes:(id)arg1 deniedContactTypes:(id)arg2 allowedContactGroups:(id)arg3 deniedContactGroups:(id)arg4 allowedContacts:(id)arg5 deniedContacts:(id)arg6 phoneCallBypassSettings:(id)arg7;
- (id)_initWithRecord:(id)arg1;
- (id)allowedContactGroups;
- (id)allowedContactTypes;
- (id)allowedContacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deniedContactGroups;
- (id)deniedContactTypes;
- (id)deniedContacts;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)phoneCallBypassSettings;

@end
