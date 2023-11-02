
@interface SGMISaliencyModelConfigRule : NSObject {
    NSNumber * _featureName;
    NSNumber * _output;
    NSNumber * _strictLowerBound;
    NSNumber * _strictUpperBound;
}

@property (readonly) NSNumber *featureName;
@property (readonly) NSNumber *output;
@property (readonly) NSNumber *strictLowerBound;
@property (readonly) NSNumber *strictUpperBound;

- (void).cxx_destruct;
- (id)featureName;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFeatureName:(id)arg1 strictLowerBound:(id)arg2 strictUpperBound:(id)arg3 output:(id)arg4;
- (id)output;
- (id)strictLowerBound;
- (id)strictUpperBound;

@end
