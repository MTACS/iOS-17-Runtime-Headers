
@protocol GEOMapRoad <GEOMapLine>

@required

- (GEOMapRequest *)findRoadsFrom:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsFromNextIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsFromPreviousIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsToNextIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsToPreviousIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (int)formOfWay;
- (NSString *)internalRoadName;
- (bool)isBridge;
- (bool)isRail;
- (bool)isTunnel;
- (int)rampType;
- (int)roadClass;
- (void)roadEdgesWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEORoadEdge *, void*
- (void)roadFeaturesWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOMultiSectionFeature *, void*
- (unsigned long long)roadID;
- (double)roadWidth;
- (unsigned long long)speedLimit;
- (bool)speedLimitIsMPH;
- (int)travelDirection;

@end
