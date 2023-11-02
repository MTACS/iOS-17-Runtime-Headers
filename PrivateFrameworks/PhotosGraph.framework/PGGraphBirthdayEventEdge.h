
@interface PGGraphBirthdayEventEdge : PGGraphOptimizedEdge {
    double  _confidence;
}

@property (readonly) double confidence;

+ (id)filter;
+ (id)propertyDictionaryWithConfidence:(double)arg1;

- (double)confidence;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toPersonNode:(id)arg2 confidence:(double)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (id)propertyDictionary;

@end
