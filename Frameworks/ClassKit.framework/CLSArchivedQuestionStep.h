
@interface CLSArchivedQuestionStep : CLSArchivedSurveyStep <CLSAssetAdopter, CLSRelationable> {
    long long  _displayOrder;
    NSString * _questionText;
    long long  _questionType;
    NSArray * assets;
}

@property (nonatomic, retain) CLSArchivedAnswerFormat *archivedAnswerFormat;
@property (nonatomic, readonly) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *questionText;
@property (nonatomic, readonly) long long questionType;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedAnswerFormat;
- (id)assets;
- (long long)displayOrder;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuestionText:(id)arg1 answerFormat:(id)arg2;
- (id)questionText;
- (long long)questionType;
- (void)setArchivedAnswerFormat:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setQuestionText:(id)arg1;
- (void)setQuestionType:(long long)arg1;

@end
