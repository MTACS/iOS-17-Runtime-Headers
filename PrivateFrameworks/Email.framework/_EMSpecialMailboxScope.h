
@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(bool*)arg2;
- (id)cachedSelf;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeMailboxes;
- (bool)excludeTypes;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mailboxObjectIDs;
- (id)mailboxScopeByAddingMailboxes:(id)arg1;
- (id)mailboxScopeByRemovingMailboxes:(id)arg1;
- (id)mailboxTypes;
- (bool)scopeContainsMailbox:(id)arg1;
- (bool)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2;

@end
