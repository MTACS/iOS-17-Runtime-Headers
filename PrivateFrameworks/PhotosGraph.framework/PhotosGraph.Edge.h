
@interface PhotosGraph.Edge : NSObject <KGEdge> {
    void identifier;
    void labels;
    void properties;
    void sourceNode;
    void targetNode;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, copy) NSSet *labels;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, retain) <KGNode> *sourceNode;
@property (nonatomic, retain) <KGNode> *targetNode;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;
- (id)labels;
- (id)oppositeNodeFromNode:(id)arg1;
- (id)properties;
- (void)resolveIdentifier:(unsigned long long)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setLabels:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSourceNode:(id)arg1;
- (void)setTargetNode:(id)arg1;
- (id)sourceNode;
- (id)targetNode;

@end
