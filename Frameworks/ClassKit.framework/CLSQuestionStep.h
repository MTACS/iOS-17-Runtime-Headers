
@interface CLSQuestionStep : CLSSurveyStep <CLSMutableAssetAdopter, CLSRelationable> {
    long long  _displayOrder;
    NSString * _questionText;
    long long  _questionType;
    NSArray * assets;
}

@property (nonatomic, retain) CLSAnswerFormat *answerFormat;
@property (nonatomic, readonly) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *questionText;
@property (nonatomic) long long questionType;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)answerFormat;
- (id)assets;
- (bool)assetsEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)displayOrder;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuestionText:(id)arg1 answerFormat:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)questionText;
- (long long)questionType;
- (void)removeAsset:(id)arg1;
- (void)setAnswerFormat:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setQuestionText:(id)arg1;
- (void)setQuestionType:(long long)arg1;

@end
