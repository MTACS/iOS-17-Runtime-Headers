
@protocol TILinguisticAssetDownloading

@required

- (void)addLinguisticAssetsAssertionForLanguage:(void *)arg1 assertionID:(void *)arg2 region:(void *)arg3 clientID:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)removeLinguisticAssetsAssertionWithIdentifier:(void *)arg1 forClientID:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestLinguisticAssetsForLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)updateAssetForInputModeIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
