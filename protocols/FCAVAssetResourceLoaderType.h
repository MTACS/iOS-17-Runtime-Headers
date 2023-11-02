
@protocol FCAVAssetResourceLoaderType

@required

- (void)prefetchMasterPlaylistForAssetURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCHLSPlaylist *, id, NSError *, void*
- (void)registerAVURLAssetForAutomaticResourceManagement:(AVURLAsset *)arg1;

@end
