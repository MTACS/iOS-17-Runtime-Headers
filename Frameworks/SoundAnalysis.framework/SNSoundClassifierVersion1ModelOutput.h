
@interface SNSoundClassifierVersion1ModelOutput : NSObject <MLFeatureProvider> {
    NSDictionary * __9;
    NSString * _classLabel;
}

@property (nonatomic, retain) NSDictionary *_9;
@property (nonatomic, retain) NSString *classLabel;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)_9;
- (id)classLabel;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWith_9:(id)arg1 classLabel:(id)arg2;
- (void)setClassLabel:(id)arg1;
- (void)set_9:(id)arg1;

@end
