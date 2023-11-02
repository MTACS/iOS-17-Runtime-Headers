
@interface KGSnapshotEdge : NSObject <KGEdge> {
    unsigned long long  _identifier;
    NSSet * _labels;
    NSDictionary * _properties;
    <KGNode> * _sourceNode;
    <KGNode> * _targetNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSSet *labels;
@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (nonatomic, readonly) <KGNode> *sourceNode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <KGNode> *targetNode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (id)oppositeNodeFromNode:(id)arg1;
- (id)properties;
- (void)resolveIdentifier:(unsigned long long)arg1;
- (id)sourceNode;
- (id)targetNode;

@end
