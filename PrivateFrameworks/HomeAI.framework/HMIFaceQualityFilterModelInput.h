
@interface HMIFaceQualityFilterModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _input;
    NSString * _inputName;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input;
@property (readonly) NSString *inputName;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput:(id)arg1 inputName:(id)arg2;
- (id)input;
- (id)inputName;
- (void)setInput:(id)arg1;

@end
