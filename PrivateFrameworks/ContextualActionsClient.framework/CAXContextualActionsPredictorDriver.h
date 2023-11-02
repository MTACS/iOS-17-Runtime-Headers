
@interface CAXContextualActionsPredictorDriver : NSObject {
    NSDictionary * _configDict;
    CAXContextualActionsPredictor * _globalModel;
    CAXContextualActionsPredictor * _personalizedModel;
}

@property (nonatomic, retain) NSDictionary *configDict;
@property (nonatomic, retain) CAXContextualActionsPredictor *globalModel;
@property (nonatomic, retain) CAXContextualActionsPredictor *personalizedModel;

+ (id)decoderUrl;
+ (id)encoderUrl;
+ (id)personalizedModelInUseKey;

- (void).cxx_destruct;
- (id)configDict;
- (id)decodeArrayOfCAElements:(id)arg1 fromDecoderUrl:(id)arg2;
- (id)decodeArrayOfCAElementsIntoActionIds:(id)arg1 fromDecoderUrl:(id)arg2;
- (id)globalModel;
- (id)initWithConfigUrl:(id)arg1;
- (id)initWithConfigUrl:(id)arg1 encoderUrl:(id)arg2 decoderUrl:(id)arg3 globalModelUrl:(id)arg4 personalizedModelUrl:(id)arg5;
- (id)personalizedModel;
- (id)predictWithConfidenceFromContext:(id)arg1 numActions:(unsigned long long)arg2;
- (void)setConfigDict:(id)arg1;
- (void)setGlobalModel:(id)arg1;
- (void)setPersonalizedModel:(id)arg1;

@end
