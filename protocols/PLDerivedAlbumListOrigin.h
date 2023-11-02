
@protocol PLDerivedAlbumListOrigin

@required

- (void)enumerateDerivedAlbumLists:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<PLIndexMappingCache> *, void*
- (void)registerDerivedAlbumList:(NSObject<PLIndexMappingCache> *)arg1;
- (void)unregisterAllDerivedAlbums;

@end
