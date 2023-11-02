
@interface SNAudioQualityModelOutput : NSObject <MLFeatureProvider> {
    NSString * _classLabel;
    NSDictionary * _final_output;
}

@property (nonatomic, retain) NSString *classLabel;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) NSDictionary *final_output;

- (void).cxx_destruct;
- (id)classLabel;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)final_output;
- (id)initWithFinal_output:(id)arg1 classLabel:(id)arg2;
- (void)setClassLabel:(id)arg1;
- (void)setFinal_output:(id)arg1;

@end
