
@interface PGGraphBasePresentEdge : PGGraphOptimizedEdge {
    double  _importance;
    unsigned int  _numberOfAssets;
}

@property (readonly) double importance;
@property (nonatomic, readonly) unsigned long long numberOfAssets;

+ (id)consolidatedFilter;
+ (id)consolidatedPresentInAssetsFilter;
+ (id)filter;
+ (void)setImportance:(double)arg1 onPresentEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;
+ (void)setNumberOfAssets:(unsigned long long)arg1 onPresentEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;

- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (double)importance;
- (id)initFromPersonNode:(id)arg1 toMomentNode:(id)arg2 importance:(double)arg3 numberOfAssets:(unsigned long long)arg4;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (unsigned long long)numberOfAssets;
- (id)propertyDictionary;

@end
