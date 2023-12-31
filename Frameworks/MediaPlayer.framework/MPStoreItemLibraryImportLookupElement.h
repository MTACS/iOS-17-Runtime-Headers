
@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {
    NSDictionary * _lookupDictionary;
    ICStorePlatformMetadata * _storeItem;
}

@property (nonatomic, readonly) NSDictionary *lookupDictionary;

- (void).cxx_destruct;
- (id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2;
- (id)lookupDictionary;
- (id)storeItem;

@end
