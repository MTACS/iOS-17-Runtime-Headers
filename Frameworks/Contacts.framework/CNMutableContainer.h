
@interface CNMutableContainer : CNContainer

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *constraintsPath;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, copy) NSData *externalSyncData;
@property (nonatomic, copy) NSString *externalSyncTag;
@property (getter=isGuardianRestricted, nonatomic) bool guardianRestricted;
@property (getter=isGuardianStateDirty, nonatomic) bool guardianStateDirty;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic, copy) NSString *meIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long restrictions;
@property (nonatomic, copy) CNContainer *snapshot;
@property (nonatomic) long long type;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (id)accountIdentifier;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
- (id)constraintsPath;
- (id)copy;
- (id)externalIdentifier;
- (id)externalModificationTag;
- (id)externalSyncData;
- (id)externalSyncTag;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (bool)isEnabled;
- (bool)isGuardianRestricted;
- (bool)isGuardianStateDirty;
- (id)lastSyncDate;
- (id)meIdentifier;
- (id)name;
- (unsigned long long)restrictions;
- (void)setAccountIdentifier:(id)arg1;
- (void)setConstraintsPath:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalSyncData:(id)arg1;
- (void)setExternalSyncTag:(id)arg1;
- (void)setGuardianRestricted:(bool)arg1;
- (void)setGuardianRestricted:(bool)arg1 shouldPushChangeToServer:(bool)arg2;
- (void)setGuardianStateDirty:(bool)arg1;
- (void)setIOSLegacyIdentifier:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setMeIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRestrictions:(unsigned long long)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (bool)addContainerInStore:(id)arg1 toAccountWithIdentifier:(id)arg2 saveRequest:(id)arg3;
- (bool)deleteContainerInStore:(id)arg1 saveRequest:(id)arg2;
- (bool)updateContainerInStore:(id)arg1 saveRequest:(id)arg2;

@end
