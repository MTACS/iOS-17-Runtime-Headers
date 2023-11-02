
@protocol TIAssetManaging <NSObject>

@required

- (void)addLinguisticAssetsAssertionForLanguage:(void *)arg1 assertionID:(void *)arg2 region:(void *)arg3 clientID:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)ddsAssetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2 filteredWithRegion:(bool)arg3;
- (void)ddsAssetContentItemsWithContentType:(void *)arg1 inputMode:(void *)arg2 filteredWithRegion:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, TIInputMode *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)ddsAssetsForInputMode:(void *)arg1 cachedOnly:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: TIInputMode *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (id /* block */)enabledInputModeIdentifiersProviderBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (NSArray *)enabledInputModes;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (id /* block */)preferencesProviderBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)removeLinguisticAssetsAssertionWithIdentifier:(void *)arg1 forClientID:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestAssetDownloadForLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setEnabledInputModeIdentifiersProviderBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, void*
- (void)setPreferencesProviderBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, void*
- (NSArray *)topActiveRegions;
- (void)updateAssetForInputModeIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
