
@interface FBKQuestion : FBKManagedLocalIDObject <FBKDiffableObject> {
    <FBKChoiceSetResolverProtocol> * choiceSetResolver;
}

@property (nonatomic, readonly) FBKModalConfiguration *EnhancedLoggingModalConfiguration;
@property unsigned long long answerType;
@property (nonatomic, retain) NSSet *answers;
@property (readonly) bool appearsRequiredIfOptional;
@property (retain) NSString *choiceSetClientSideResolver;
@property (nonatomic, retain) <FBKChoiceSetResolverProtocol> *choiceSetResolver;
@property (retain) NSArray *choices;
@property (retain) NSNumber *conditionQuestionID;
@property (retain) id conditionValue;
@property (getter=isConditional) bool conditional;
@property (nonatomic, retain) NSArray *conditions;
@property (nonatomic, readonly) bool configuresEnhancedLogging;
@property (nonatomic, retain) NSArray *modalConfigurations;
@property (retain) NSString *placeholder;
@property (retain) NSNumber *primitiveAnswerType;
@property (retain) NSNumber *primitiveConditional;
@property (retain) NSNumber *primitiveRequired;
@property (retain) FBKQuestionGroup *questionGroup;
@property (getter=isRequired) bool required;
@property (retain) NSString *resolver;
@property (retain) NSString *role;
@property (retain) NSNumber *sortOrder;
@property (retain) NSString *targetUserAgent;
@property (nonatomic, readonly) NSString *tat;
@property (retain) NSString *text;
@property (retain) NSString *userAgentPopulate;
@property bool visible;

+ (id)entityName;
+ (id)uniquingKey;

- (void).cxx_destruct;
- (id)EnhancedLoggingModalConfiguration;
- (void)addAnswer:(id)arg1;
- (bool)affectsRequirements;
- (id)allChoices;
- (id)answerToDisplayNameValueTransformer;
- (unsigned long long)answerType;
- (bool)appearsRequiredIfOptional;
- (id)choiceForValue:(id)arg1;
- (id)choiceSetResolver;
- (bool)configuresEnhancedLogging;
- (id)description;
- (id)diffableHashWithContext:(id)arg1;
- (id)displayTextForAnswer:(id)arg1;
- (bool)isAnswerableByAutoFill;
- (bool)isConditional;
- (bool)isMultiSelect;
- (bool)isRequired;
- (void)prepareForDeletion;
- (id)serverSideChoices;
- (void)setAnswerType:(unsigned long long)arg1;
- (void)setChoiceSetResolver:(id)arg1;
- (void)setConditional:(bool)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setQuestionChoices:(id)arg1;
- (void)setRequired:(bool)arg1;
- (bool)shouldHaveChoices;
- (id)tat;
- (id)titleForValue:(id)arg1;

@end
