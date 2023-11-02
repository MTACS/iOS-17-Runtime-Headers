
@interface GEOMapAssetMetadata : NSObject {
    bool  _enableASTCTextures;
    NSArray * _tiles;
}

- (void).cxx_destruct;
- (id)initWithVectorTiles:(id)arg1 enableASTCTextures:(bool)arg2;
- (id)keysForMetroAvailability:(bool)arg1;

@end
