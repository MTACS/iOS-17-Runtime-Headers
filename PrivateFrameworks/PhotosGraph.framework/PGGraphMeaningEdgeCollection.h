
@interface PGGraphMeaningEdgeCollection : PGGraphEdgeCollection

@property (readonly) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly) PGGraphMomentNodeCollection *momentNodes;

+ (Class)edgeClass;
+ (id)meaningEdgesWithConfidenceThreshold:(double)arg1 inGraph:(id)arg2;

- (id)meaningNodes;
- (id)momentNodes;

@end
