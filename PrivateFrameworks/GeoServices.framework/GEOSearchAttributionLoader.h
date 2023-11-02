
@interface GEOSearchAttributionLoader : NSObject {
    GEOSearchAttributionManifest * _attributionManifest;
}

- (void).cxx_destruct;
- (id)initWithAttributionManifest:(id)arg1;
- (void)loadAttributionInfoForIdentifier:(id)arg1 allowNetwork:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
