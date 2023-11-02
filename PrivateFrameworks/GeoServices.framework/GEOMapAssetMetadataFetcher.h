
@interface GEOMapAssetMetadataFetcher : NSObject {
    GEOApplicationAuditToken * _auditToken;
    bool  _enableASTCTextures;
    geo_isolater * _isolation;
    GEOTileKeyList * _lastLoadedKeys;
    GEOMapAssetMetadata * _lastLoadedMetadata;
    GEOTileLoader * _tileLoader;
}

- (void).cxx_destruct;
- (void)fetchAssetMetadataForMetadataKeys:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithTileLoader:(id)arg1 auditToken:(id)arg2 enableASTCTextures:(bool)arg3;

@end
