
@protocol PGRelationshipAnalyzer <NSObject>

@required

- (id)initWithRelationshipProcessor:(PGGraphRelationshipProcessor *)arg1;
- (NSString *)name;
- (void)runAnalysisWithProgressBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*

@end
