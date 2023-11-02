
@interface WFExpandingParameter : WFParameter {
    NSString * _hintLabel;
    <WFExpandingParameterHintProvider> * _hintProvider;
}

@property (nonatomic, readonly) NSString *hintLabel;
@property (nonatomic) <WFExpandingParameterHintProvider> *hintProvider;

- (void).cxx_destruct;
- (id)defaultSupportedVariableTypes;
- (id)hintLabel;
- (id)hintProvider;
- (id)importQuestionBehavior;
- (id)initWithDefinition:(id)arg1;
- (void)setHintProvider:(id)arg1;
- (Class)singleStateClass;

@end
