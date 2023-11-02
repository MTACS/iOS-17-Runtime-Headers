
@interface CLSSurveyAnswerItem : CLSObject <CLSMutableAssetAdopter, CLSRelationable> {
    long long  _action;
    long long  _answerType;
    double  _continuousSliderValue;
    NSString * _questionID;
    NSString * _responderPersonID;
    long long  _selectedIndex;
    long long  _state;
    NSString * _surveyID;
    NSString * _textResponse;
    NSArray * assets;
}

@property (nonatomic) long long action;
@property (nonatomic) long long answerType;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic) double continuousSliderValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *questionID;
@property (nonatomic, copy) NSString *responderPersonID;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *surveyID;
@property (nonatomic, copy) NSString *textResponse;

+ (id)identifierForSurveyID:(id)arg1 questionID:(id)arg2 responderID:(id)arg3;
+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_answerUpdated;
- (long long)action;
- (void)addAsset:(id)arg1;
- (long long)answerType;
- (id)assets;
- (double)continuousSliderValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurveyID:(id)arg1 questionID:(id)arg2 responderID:(id)arg3;
- (void)mergeWithObject:(id)arg1;
- (id)questionID;
- (void)removeAsset:(id)arg1;
- (id)responderPersonID;
- (long long)selectedIndex;
- (void)setAction:(long long)arg1;
- (void)setAnswerType:(long long)arg1;
- (void)setContinuousSliderValue:(double)arg1;
- (void)setQuestionID:(id)arg1;
- (void)setResponderPersonID:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setSurveyID:(id)arg1;
- (void)setTextResponse:(id)arg1;
- (long long)state;
- (id)surveyID;
- (id)textResponse;
- (bool)validateObject:(id*)arg1;

@end
