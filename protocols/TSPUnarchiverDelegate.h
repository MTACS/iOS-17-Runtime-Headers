
@protocol TSPUnarchiverDelegate <NSObject>

@required

- (NSUUID *)UUIDForObjectIdentifier:(long long)arg1;
- (long long)componentIdentifier;
- (TSPData *)dataForIdentifier:(long long)arg1 referencedByObjectIdentifier:(long long)arg2 objectClass:(Class)arg3;
- (bool)didFinishResolvingReferences;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (unsigned char)packageIdentifier;
- (unsigned long long)readVersion;
- (unsigned int)sourceType;
- (void)unarchiver:(TSPUnarchiver *)arg1 didReadLazyReference:(TSPLazyReference *)arg2 isExternal:(bool*)arg3;

@optional

- (TSPComponent *)component;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;

@end
