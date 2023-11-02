
@interface CRTextSequenceRecognizerModelCoreMLInput : NSObject <CRTextRecognizerModelInput, MLFeatureProvider> {
    MLMultiArray * _img_input;
    NSArray * _textFeatureInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *featureNames;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MLMultiArray *img_input;
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)img_input;
- (id)initWithImg_input:(id)arg1 featureInfo:(id)arg2;
- (void)setImg_input:(id)arg1;
- (void)setTextFeatureInfo:(id)arg1;
- (id)textFeatureInfo;

@end
