
@interface CRFormDetectorModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _array;
}

@property (nonatomic, retain) MLMultiArray *array;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)array;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithMLMultiArray:(id)arg1;
- (void)setArray:(id)arg1;

@end
