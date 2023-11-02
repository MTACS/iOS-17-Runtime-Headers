
@protocol PGGraphMeaningfulEvent <PGGraphEvent>

@required

- (NSSet *)alternativeMeaningLabels;
- (PGGraphMeaningNodeCollection *)alternativeMeaningNodes;
- (void)enumerateMeaningEdgesAndNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningEdge *, PGGraphMeaningNode *, bool*, void*
- (void)enumerateMeaningEdgesAndNodesWithDomain:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 9: unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningEdge *, PGGraphMeaningNode *, bool*, void*
- (void)enumerateMeaningNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningNode *, bool*, void*
- (void)enumerateReliableMeaningNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningNode *, bool*, void*
- (NSSet *)meaningLabels;
- (PGGraphMeaningNodeCollection *)meaningNodes;
- (double)meaningScore;

@end
