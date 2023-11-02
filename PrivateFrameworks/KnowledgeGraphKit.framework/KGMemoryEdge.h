
@interface KGMemoryEdge : NSObject <KGEdge> {
    unsigned long long  _identifier;
    NSSet * _labels;
    NSDictionary * _properties;
    KGMemoryNode * _sourceNode;
    KGMemoryNode * _targetNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSSet *labels;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, readonly) KGMemoryNode *sourceNode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) KGMemoryNode *targetNode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;
- (id)labels;
- (id)oppositeNodeFromNode:(id)arg1;
- (id)properties;
- (void)resolveIdentifier:(unsigned long long)arg1;
- (void)setProperties:(id)arg1;
- (id)sourceNode;
- (id)targetNode;

@end
