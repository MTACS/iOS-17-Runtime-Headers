
@interface PGFeatureAugmenterMixUp : NSObject <PGFeatureAugmenter> {
    float  _alpha;
    unsigned long long  _count;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3;
+ (id)instanceWithParameters:(id)arg1 error:(id*)arg2;
+ (id)mixupOfFloatVector:(id)arg1 withFloatVector:(id)arg2 lambda:(float)arg3;
+ (id)name;

- (id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (float)alpha;
- (unsigned long long)count;
- (id)floatVectorWithFloatVector:(id)arg1 error:(id*)arg2;
- (id)floatVectorsWithFloatVectors:(id)arg1 error:(id*)arg2;
- (id)initWithCount:(unsigned long long)arg1 alpha:(float)arg2 error:(id*)arg3;

@end
