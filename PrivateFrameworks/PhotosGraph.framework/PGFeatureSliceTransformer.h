
@interface PGFeatureSliceTransformer : NSObject <PGFeatureTransformer> {
    long long  _fromIndex;
    long long  _toIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fromIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long toIndex;

+ (id)instanceWithParameters:(id)arg1 error:(id*)arg2;
+ (id)name;

- (id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2;
- (id)floatVectorWithFloatVector:(id)arg1 error:(id*)arg2;
- (long long)fromIndex;
- (id)init;
- (id)initFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (long long)toIndex;

@end
