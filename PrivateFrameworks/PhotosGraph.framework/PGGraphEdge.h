
@interface PGGraphEdge : MAEdge <PGGraphElement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)filter;

- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)initWithSourceNode:(id)arg1 targetNode:(id)arg2;
- (bool)isEqualToEdge:(id)arg1;
- (id)keywordDescription;
- (unsigned long long)propertiesCount;
- (id)propertyForKey:(id)arg1;
- (void)setWeight:(float)arg1;
- (float)weight;

@end
