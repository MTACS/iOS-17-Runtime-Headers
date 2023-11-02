
@interface PGGraphMeaningEdge : PGGraphOptimizedEdge {
    double  _confidence;
    unsigned int  _isHighPrecision;
}

@property (readonly) double confidence;
@property (readonly) bool isHighPrecision;
@property (readonly) bool isReliable;
@property (readonly) NSString *meaningLabel;

+ (unsigned short)domain;
+ (id)filter;
+ (id)highPrecisionFilter;
+ (id)label;
+ (id)propertyDictionaryWithConfidence:(double)arg1 isHighPrecision:(bool)arg2;
+ (id)reliableFilter;

- (double)confidence;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toMeaningNode:(id)arg2 confidence:(double)arg3 isHighPrecision:(bool)arg4;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (bool)isHighPrecision;
- (bool)isReliable;
- (id)label;
- (id)meaningLabel;
- (id)propertyDictionary;

@end
