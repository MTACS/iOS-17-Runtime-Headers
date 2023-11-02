
@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable * _parametersToEventsMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMapTable:(id)arg1;
- (id)poiEventsForSpatialLookupParameters:(id)arg1;

@end
