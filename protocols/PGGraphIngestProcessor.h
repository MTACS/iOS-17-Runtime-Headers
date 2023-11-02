
@protocol PGGraphIngestProcessor <NSObject>

@required

- (id)init;
- (id)initWithGraphBuilder:(PGGraphBuilder *)arg1;
- (void)runWithGraphUpdate:(void *)arg1 progressBlock:(void *)arg2; // needs 2 arg types, found 8: PGGraphUpdate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (bool)shouldRunWithGraphUpdate:(PGGraphUpdate *)arg1;

@end
