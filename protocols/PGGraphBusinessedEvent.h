
@protocol PGGraphBusinessedEvent <PGGraphEvent>

@required

- (NSSet *)businessNodes;
- (void)enumerateBusinessesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphBusinessEdge *, PGGraphBusinessNode *, bool*, void*
- (NSSet *)publicEventNodes;

@end
