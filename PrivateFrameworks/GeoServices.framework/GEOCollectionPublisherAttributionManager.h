
@interface GEOCollectionPublisherAttributionManager : NSObject {
    GEOPublisherAttributionManifestIndex * _index;
    geo_isolater * _isolator;
    NSCache * _manifestsCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bestAttributionForPublisher:(id)arg1;
- (id)bestAttributionForPublisher:(id)arg1 preferredLanguages:(id)arg2;
- (id)init;

@end
