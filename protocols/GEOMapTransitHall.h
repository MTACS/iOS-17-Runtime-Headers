
@protocol GEOMapTransitHall <GEOMapTransitPoint>

@required

- (GEOMapRequest *)findStation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapTransitStation> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findStops:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapTransitStop> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (unsigned long long)stationID;

@end
