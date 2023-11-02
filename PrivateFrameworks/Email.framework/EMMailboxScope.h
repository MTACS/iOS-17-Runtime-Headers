
@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    bool  _excludeMailboxes;
    bool  _excludeTypes;
    unsigned long long  _hash;
    NSSet * _mailboxObjectIDs;
    NSSet * _mailboxTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) bool excludeMailboxes;
@property (nonatomic, readonly) bool excludeTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *mailboxObjectIDs;
@property (nonatomic, readonly, copy) NSSet *mailboxTypes;
@property (readonly) Class superclass;

+ (id)allMailboxesScope;
+ (id)mailboxScopeForMailboxObjectIDs:(id)arg1 forExclusion:(bool)arg2;
+ (id)mailboxScopeForMailboxType:(long long)arg1 forExclusion:(bool)arg2;
+ (id)mailboxScopeForMailboxTypes:(id)arg1 forExclusion:(bool)arg2;
+ (id)noMailboxesScope;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_calculateHash;
- (id)_mailboxObjectIDsDescriptionIsDebug:(bool)arg1;
- (id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)arg1;
- (id)_mailboxTypesDescription;
- (bool)_scopeContainsMailboxWithObjectID:(id)arg1 mailboxTypeBlock:(id /* block */)arg2;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(bool*)arg2;
- (id)cachedSelf;
- (bool)containsOnlyInboxType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeMailboxes;
- (bool)excludeTypes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxTypes:(id)arg1 excludeTypes:(bool)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(bool)arg4;
- (id)initWithMailboxTypes:(id)arg1 excludeTypes:(bool)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(bool)arg4 cached:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (id)mailboxObjectIDs;
- (id)mailboxScopeByAddingMailboxes:(id)arg1;
- (id)mailboxScopeByRemovingMailboxes:(id)arg1;
- (id)mailboxTypes;
- (bool)scopeContainsMailbox:(id)arg1;
- (bool)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2;

@end
