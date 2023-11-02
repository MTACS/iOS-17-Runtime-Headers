
@protocol TSPReaderDelegate <NSObject>

@required

- (NSUUID *)baseObjectUUID;
- (TSPCancellationState *)cancellationStateForReader:(TSPReader *)arg1;
- (TSPObjectContext *)contextForReader:(TSPReader *)arg1;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (bool)isReadingFromDocument;
- (<TSPLazyReferenceDelegate> *)lazyReferenceDelegateForReader:(TSPReader *)arg1;
- (<TSPObjectDelegate> *)objectDelegateForReader:(TSPReader *)arg1;
- (unsigned char)packageIdentifier;
- (unsigned long long)readVersion;
- (void)reader:(void *)arg1 didFindExternalReferenceToObjectIdentifier:(void *)arg2 componentIdentifier:(void *)arg3 isWeak:(void *)arg4 allowUnknownObject:(void *)arg5 objectClass:(void *)arg6 objectProtocol:(void *)arg7 fromParentObject:(void *)arg8 completion:(void *)arg9; // needs 9 arg types, found 14: TSPReader *, long long, long long, bool, bool, Class, Protocol *, TSPObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)reader:(void *)arg1 didFindExternalRepeatedReference:(void *)arg2 isWeak:(void *)arg3 allowUnknownObject:(void *)arg4 objectClass:(void *)arg5 objectProtocol:(void *)arg6 fromParentObject:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 13: TSPReader *, NSArray *, bool, bool, Class, Protocol *, TSPObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)reader:(TSPReader *)arg1 didReadLazyReference:(TSPLazyReference *)arg2;
- (TSPData *)reader:(TSPReader *)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(TSPReader *)arg1 wantsObjectIdentifierForUUID:(NSUUID *)arg2;
- (unsigned int)sourceType;

@optional

- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (void)reader:(TSPReader *)arg1 didResetObjectIdentifierForObject:(TSPObject *)arg2 originalObjectIdentifier:(long long)arg3;
- (void)reader:(TSPReader *)arg1 didResetObjectUUID:(NSUUID *)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(NSUUID *)arg4;
- (void)reader:(TSPReader *)arg1 didUnarchiveObject:(TSPObject *)arg2;

@end
