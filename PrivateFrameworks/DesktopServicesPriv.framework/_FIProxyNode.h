
@interface _FIProxyNode : FICustomNode {
    FINode * _proxyNode;
}

@property (nonatomic, readonly) FINode *proxyNode;

- (void).cxx_destruct;
- (id)childItemCount;
- (id)contentModificationDate;
- (id)contentType;
- (id)creationDate;
- (id)debugDescription;
- (id)displayName;
- (id)documentSize;
- (id)enumeratorError;
- (id)fetchLastUsedDate:(bool)arg1;
- (id)fetchTags:(bool)arg1;
- (id)fileName;
- (id)fileURL;
- (id)fpDomain;
- (id)fpItem;
- (id)initWithProxyNode:(id)arg1;
- (void)inlineProgressCancel;
- (bool)isFolder;
- (bool)isPackage;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTopLevelSharedItem;
- (bool)isTrashed;
- (id)itemDecorations;
- (id)itemIdentifier;
- (id)iteratorIncludingInvisibleItems:(bool)arg1 synchronous:(bool)arg2;
- (id)lastUsedDate;
- (unsigned long long)nodeIs:(unsigned long long)arg1;
- (unsigned int)nodePermissions:(unsigned int)arg1;
- (id)ownerNameComponents;
- (id)propertyAsArray:(unsigned int)arg1;
- (bool)propertyAsBool:(unsigned int)arg1;
- (id)propertyAsDate:(unsigned int)arg1;
- (id)propertyAsDictionary:(unsigned int)arg1;
- (id)propertyAsNSObject:(unsigned int)arg1;
- (id)propertyAsNumber:(unsigned int)arg1;
- (id)propertyAsString:(unsigned int)arg1;
- (id)proxyNode;
- (bool)requiresForcedSyncing;
- (id)source;
- (id)tags;
- (id)typeIdentifier;
- (unsigned int)volumeIs:(unsigned int)arg1;

@end
