
@interface SNVGGishEmbeddingModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _input1;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input1;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput1:(id)arg1;
- (id)input1;
- (void)setInput1:(id)arg1;

@end
