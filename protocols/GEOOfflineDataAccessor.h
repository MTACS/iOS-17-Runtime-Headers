
@protocol GEOOfflineDataAccessor <NSObject>

@required

- (GEOTileData *)dataForKey:(GEOOfflineDataKey *)arg1 error:(id*)arg2;
- (void)getAvailableKeysForLayer:(void *)arg1 callbackQueue:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 9: unsigned int, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getDataForKey:(void *)arg1 callbackQueue:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 9: GEOOfflineDataKey *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOTileData *, NSError *, void*
- (void)getOfflineVersionMetadataWithCallbackQueue:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOOfflineVersionMetadata *, NSError *, void*
- (void)hasDataForKey:(void *)arg1 callbackQueue:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 9: GEOOfflineDataKey *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)hasDataForKey:(GEOOfflineDataKey *)arg1 error:(id*)arg2;
- (GEOPBOfflineTileMetadata *)offlineTileMetadataWithError:(id*)arg1;

@end
