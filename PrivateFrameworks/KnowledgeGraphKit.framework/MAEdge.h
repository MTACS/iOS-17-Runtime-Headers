
@interface MAEdge : NSObject <KGEdge, MAElement, NSCopying> {
    MAGraphReference * _graphReference;
    unsigned long long  _identifier;
    MANode * _sourceNode;
    MANode * _targetNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short domain;
@property (nonatomic, readonly) <MAGraphProxy> *graph;
@property (nonatomic, retain) MAGraphReference *graphReference;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSSet *labels;
@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (nonatomic, readonly) MANode *sourceNode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MANode *targetNode;
@property (nonatomic, readonly) float weight;

- (void).cxx_destruct;
- (id)commonNode:(id)arg1;
- (bool)conformsToEdgeSchema:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (id)graph;
- (id)graphReference;
- (bool)hasEqualPropertiesToEdge:(id)arg1;
- (bool)hasProperties;
- (bool)hasProperties:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)initWithSourceNode:(id)arg1 targetNode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEdge:(id)arg1;
- (bool)isIdentifiedByProperties:(id)arg1;
- (bool)isLoop;
- (bool)isSameEdgeAsEdge:(id)arg1;
- (bool)isUnique;
- (id)labels;
- (unsigned long long)memoryFootprint:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)oppositeNode:(id)arg1;
- (id)oppositeNodeFromNode:(id)arg1;
- (id)properties;
- (unsigned long long)propertiesCount;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
- (id)propertyKeys;
- (void)resolveIdentifier:(unsigned long long)arg1;
- (void)setGraphReference:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)shortDescription;
- (id)sourceNode;
- (id)targetNode;
- (id)visualString;
- (id)visualStringWithName:(id)arg1;
- (id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2;

@end
