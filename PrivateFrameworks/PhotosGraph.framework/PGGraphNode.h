
@interface PGGraphNode : MANode <PGGraphElement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MANodeFilter *entityFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)filter;

- (id)UUID;
- (id)entityFilter;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (bool)isEqualToNode:(id)arg1;
- (id)keywordDescription;
- (id)name;
- (unsigned long long)propertiesCount;
- (id)propertyForKey:(id)arg1;
- (void)setWeight:(float)arg1;
- (id)shortDescription;
- (float)weight;

@end
