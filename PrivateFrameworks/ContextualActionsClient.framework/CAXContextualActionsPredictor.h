
@interface CAXContextualActionsPredictor : NSObject {
    NSMutableDictionary * _actionDecoder;
    NSMutableDictionary * _actionEncoder;
    NSURL * _configUrl;
    NSURL * _decoderUrl;
    NSURL * _encoderUrl;
    NSMutableDictionary * _model;
    NSURL * _modelUrl;
    NSMutableDictionary * _typeDecoder;
    NSMutableDictionary * _typeEncoder;
}

@property (nonatomic, retain) NSMutableDictionary *actionDecoder;
@property (nonatomic, retain) NSMutableDictionary *actionEncoder;
@property (nonatomic, retain) NSURL *configUrl;
@property (nonatomic, retain) NSURL *decoderUrl;
@property (nonatomic, retain) NSURL *encoderUrl;
@property (nonatomic, retain) NSMutableDictionary *model;
@property (nonatomic, retain) NSURL *modelUrl;
@property (nonatomic, retain) NSMutableDictionary *typeDecoder;
@property (nonatomic, retain) NSMutableDictionary *typeEncoder;

+ (id)bigramDictKey;
+ (id)decoderFileName;
+ (id)defaultCoderUrlForName:(id)arg1;
+ (id)defaultConfigFileUrl;
+ (id)defaultGlobalModelUrl;
+ (id)defaultPersonalizedModelUrl;
+ (id)encoderFileName;
+ (id)frequencyDictKey;
+ (id)ioDictKey;
+ (id)ioNoneType;
+ (id)personalizedModelFileName;
+ (id)unigramDictKey;

- (void).cxx_destruct;
- (id)actionDecoder;
- (id)actionEncoder;
- (void)addEncodedActionSequence:(id)arg1 toFrequencyDict:(id)arg2;
- (void)addKeyString:(id)arg1 andValueString:(id)arg2 toCounterDict:(id)arg3;
- (void)addModelResults:(id)arg1 toFinalResults:(id)arg2 withNumActions:(unsigned long long)arg3 seenSet:(id)arg4;
- (void)combineDict:(id)arg1 withSourceDict:(id)arg2;
- (id)configUrl;
- (id)convertToStringEncodedActionSequence:(id)arg1;
- (id)decoderUrl;
- (id)encodeActionSequence:(id)arg1;
- (id)encodeContentTypes:(id)arg1;
- (id)encoderUrl;
- (id)extractCAElementsByOrderingCounterDictByValue:(id)arg1;
- (id)extractInputTypesAsCAXContentFromActionId:(id)arg1;
- (void)fillNormalizedFrequencyValuesOnPredictions:(id)arg1;
- (id)getWFContentTypeStringFromContentTypeString:(id)arg1;
- (id)initWithDefaultCodersAndModelUrl:(id)arg1 configUrl:(id)arg2;
- (id)initWithModelUrl:(id)arg1 configUrl:(id)arg2;
- (id)initWithModelUrl:(id)arg1 encoderUrl:(id)arg2 decoderUrl:(id)arg3 configUrl:(id)arg4;
- (void)loadCoderFilesToInstanceFromDefaulUrls;
- (void)loadCoderFilesToInstanceFromEncoderUrl:(id)arg1 decoderUrl:(id)arg2;
- (void)loadModelsFromUrl:(id)arg1;
- (id)model;
- (id)modelUrl;
- (void)persistCoderFileChangesToEncoderUrl:(id)arg1 decoderUrl:(id)arg2;
- (id)predictNumActions:(unsigned long long)arg1 givenContext:(id)arg2;
- (void)saveModelToUrl:(id)arg1;
- (void)setActionDecoder:(id)arg1;
- (void)setActionEncoder:(id)arg1;
- (void)setConfigUrl:(id)arg1;
- (void)setDecoderUrl:(id)arg1;
- (void)setEncoderUrl:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelUrl:(id)arg1;
- (void)setTypeDecoder:(id)arg1;
- (void)setTypeEncoder:(id)arg1;
- (id)typeDecoder;
- (id)typeEncoder;
- (void)updateModelWithSummary:(id)arg1;

@end
