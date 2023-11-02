
@interface PGGraphPartOfDayEdge : PGGraphOptimizedEdge {
    double  _ratio;
}

@property (readonly) double ratio;

+ (id)filter;
+ (id)significantFilter;
+ (id)significantFilterWithLegacyWeights:(bool)arg1;

- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toPartOfDayNode:(id)arg2 ratio:(double)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (id)propertyDictionary;
- (double)ratio;

@end
