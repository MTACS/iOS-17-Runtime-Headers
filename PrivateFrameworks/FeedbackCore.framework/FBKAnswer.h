
@interface FBKAnswer : FBKManagedFeedbackObject {
    bool  _isAnswered;
}

@property (nonatomic, retain) FBKFormResponse *formResponse;
@property (nonatomic, readonly) bool isAnswered;
@property (getter=isOptedOut) bool optedOut;
@property (retain) NSNumber *primitiveOptedOut;
@property (nonatomic, retain) FBKQuestion *question;
@property (nonatomic, retain) NSNumber *questionID;
@property (nonatomic) bool resolved;
@property (nonatomic, retain) id value;
@property (nonatomic, copy) NSArray *values;

+ (id)_importByQuestionIDFromJSONArray:(id)arg1 withFormResponseID:(id)arg2 intoContext:(id)arg3;
+ (unsigned long long)answerTypeFromString:(id)arg1;
+ (id)emptyLocalAnswerForQuestion:(id)arg1 inFormResponse:(id)arg2;
+ (id)entityName;
+ (id)keyPathsForValuesAffectingValue;

- (bool)isAnswered;
- (bool)isOptedOut;
- (void)setOptedOut:(bool)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
