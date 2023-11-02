
@protocol MPMutableIdentifierSet <NSObject>

@required

- (void)clearLibraryIdentifiers;
- (void)clearPersonalStoreIdentifiers;
- (void)clearRadioIdentifiers;
- (void)clearUniversalStoreIdentifiers;
- (NSString *)containerUniqueID;
- (NSString *)contentItemID;
- (NSString *)handoffCorrelationID;
- (bool)isPlaceholder;
- (NSString *)lyricsID;
- (NSString *)opaqueID;
- (void)setContainerUniqueID:(NSString *)arg1;
- (void)setContentItemID:(NSString *)arg1;
- (void)setHandoffCorrelationID:(NSString *)arg1;
- (void)setLibraryIdentifiersWithDatabaseID:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MPMutableLocalLibraryIdentifiers> *, void*
- (void)setLyricsID:(NSString *)arg1;
- (void)setOpaqueID:(NSString *)arg1;
- (void)setPersonalStoreIdentifiersWithPersonID:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MPMutablePersonalStoreIdentifiers> *, void*
- (void)setPlaceholder:(bool)arg1;
- (void)setRadioIdentifiersWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MPMutableRadioIdentifiers> *, void*
- (void)setShouldExcludeFromShuffle:(bool)arg1;
- (void)setUniversalStoreIdentifiersWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MPMutableUniversalStoreIdentifiers> *, void*
- (void)setVendorID:(NSString *)arg1;
- (void)setVersionHash:(NSString *)arg1;
- (bool)shouldExcludeFromShuffle;
- (NSString *)vendorID;
- (NSString *)versionHash;

@end
