
@interface FBKQuestionGroupStub : NSObject <NSSecureCoding> {
    NSArray * _questionAnswerPairs;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *questionAnswerPairs;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithTitle:(id)arg1 questions:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)questionAnswerPairs;
- (bool)setPropertiesFromJSONObject:(id)arg1;
- (void)setQuestionAnswerPairs:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
