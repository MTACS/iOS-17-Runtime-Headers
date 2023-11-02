
@interface SGModel : NSObject {
    <PMLTransformerProtocol> * _featurizer;
    NSString * _locale;
    <PMLMultiLabelClassifierProtocol> * _model;
    SGModelSource * _modelSource;
}

@property (readonly) <PMLTransformerProtocol> *featurizer;
@property (readonly, copy) NSString *locale;
@property (readonly) <PMLMultiLabelClassifierProtocol> *model;
@property (readonly) SGModelSource *modelSource;

+ (id)featurize:(id)arg1;
+ (Class)modelClassForObjective:(unsigned long long)arg1;
+ (id)newTransformerInstanceForLanguage:(id)arg1;
+ (id)trainingFeaturesOf:(id)arg1 inLanguage:(id)arg2;
+ (id)trainingFeaturesOf:(id)arg1 inLanguage:(id)arg2 withObjective:(unsigned long long)arg3;
+ (id)transformerInstanceForLanguage:(id)arg1;
+ (id)transformerInstanceForLanguage:(id)arg1 withObjective:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)featurizer;
- (id)initWithModel:(id)arg1 locale:(id)arg2 featurizer:(id)arg3 modelSource:(id)arg4;
- (id)locale;
- (id)model;
- (id)modelSource;
- (id)predictForInput:(id)arg1;
- (id)trainingFeaturesOf:(id)arg1;

@end
