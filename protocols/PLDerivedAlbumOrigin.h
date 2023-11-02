
@protocol PLDerivedAlbumOrigin

@required

- (void)enumerateDerivedAlbums:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<PLIndexMappingCache> *, void*
- (void)registerDerivedAlbum:(NSObject<PLIndexMappingCache> *)arg1;
- (void)unregisterAllDerivedAlbums;

@end
