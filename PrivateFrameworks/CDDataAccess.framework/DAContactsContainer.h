
@interface DAContactsContainer : NSObject <DAContainer> {
    bool  _markedAsDefault;
    bool  _markedForDeletion;
    CNMutableContainer * _mutableContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGuardianRestricted, nonatomic) bool guardianRestricted;
@property (getter=isGuardianStateDirty, nonatomic) bool guardianStateDirty;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool markedAsDefault;
@property (nonatomic) bool markedForDeletion;
@property (nonatomic, readonly) CNMutableContainer *mutableContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (bool)arePropertiesReadonly;
- (id)asContainer;
- (void*)asSource;
- (id)cTag;
- (id)constraintsPath;
- (id)externalIdentifier;
- (id)identifier;
- (id)initWithCNContainer:(id)arg1;
- (bool)isAccount;
- (bool)isContact;
- (bool)isContainer;
- (bool)isContentReadonly;
- (bool)isGroup;
- (bool)isGuardianRestricted;
- (bool)isGuardianStateDirty;
- (bool)isLocal;
- (bool)isSearchContainer;
- (void)markAsDefault;
- (void)markForDeletion;
- (bool)markedAsDefault;
- (bool)markedForDeletion;
- (id)meContactIdentifier;
- (id)mutableContainer;
- (id)name;
- (void)setAccountIdentifier:(id)arg1;
- (void)setArePropertiesReadonly:(bool)arg1;
- (void)setCTag:(id)arg1;
- (void)setConstraintsPath:(id)arg1;
- (void)setContentReadonly:(bool)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setGuardianRestricted:(bool)arg1;
- (void)setGuardianStateDirty:(bool)arg1;
- (void)setMarkedAsDefault:(bool)arg1;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setMeContactIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSyncData:(id)arg1;
- (void)setSyncTag:(id)arg1;
- (void)setType:(long long)arg1;
- (id)syncData;
- (id)syncTag;
- (long long)type;
- (void)updateSaveRequest:(id)arg1;

@end
