
@interface GEOSpatialPlaceLookupResult : NSObject {
    NSMapTable * _parametersToMapItemsMap;
    NSMapTable * _parametersToResultItemMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMapItemMap:(id)arg1 resultItemMap:(id)arg2;
- (id)mapItemsForSpatialLookupParameters:(id)arg1;
- (id)resultItemForSpatialLookupParameters:(id)arg1;

@end
