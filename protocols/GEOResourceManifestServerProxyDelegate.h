
@protocol GEOResourceManifestServerProxyDelegate <NSObject>

@required

- (oneway void)serverProxy:(void *)arg1 didChangeActiveTileGroup:(void *)arg2 finishedCallback:(void *)arg3; // needs 3 arg types, found 7: <GEOResourceManifestServerProxy> *, GEOActiveTileGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)serverProxy:(id <GEOResourceManifestServerProxy>)arg1 didLoadActiveTileGroup:(GEOActiveTileGroup *)arg2;
- (oneway void)serverProxyDidStopLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;
- (void)serverProxyNeedsWiFiResourceActivity:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;

@end
