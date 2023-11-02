
@interface PGGraphRelationshipTagEdge : PGGraphOptimizedEdge {
    double  _confidence;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) PGGraphPersonNode *personNode;
@property (nonatomic, readonly) PGGraphPersonRelationshipTagNode *tagNode;

+ (id)filter;
+ (id)filterWithConfidence:(double)arg1;

- (double)confidence;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromPersonNode:(id)arg1 toRelationshipTagNode:(id)arg2 withConfidence:(double)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;
- (id)personNode;
- (id)propertyDictionary;
- (id)tagNode;

@end
