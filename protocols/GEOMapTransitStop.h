
@protocol GEOMapTransitStop <GEOMapTransitPoint>

@required

- (GEOMapRequest *)findHall:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapTransitHall> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findLinksIn:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapTransitLink> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findLinksOut:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapTransitLink> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (unsigned long long)hallID;

@end
