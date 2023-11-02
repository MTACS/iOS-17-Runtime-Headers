
@interface FBKQuestionAnswerPair : NSObject <NSSecureCoding> {
    NSString * _answerText;
    unsigned long long  _answerType;
    bool  _isRequired;
    NSString * _questionText;
}

@property (nonatomic, retain) NSString *answerText;
@property (nonatomic) unsigned long long answerType;
@property (nonatomic) bool isRequired;
@property (nonatomic, retain) NSString *questionText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)answerText;
- (unsigned long long)answerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithQuestionText:(id)arg1 andAnswerText:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isRequired;
- (id)questionText;
- (void)setAnswerText:(id)arg1;
- (void)setAnswerType:(unsigned long long)arg1;
- (void)setIsRequired:(bool)arg1;
- (bool)setPropertiesFromJSONObject:(id)arg1;
- (void)setQuestionText:(id)arg1;

@end
