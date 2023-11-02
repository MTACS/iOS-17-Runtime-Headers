
@interface FBKQuestionGroup : FBKManagedFeedbackObject

@property (nonatomic, retain) FBKBugForm *bugForm;
@property (nonatomic, retain) NSOrderedSet *primitiveQuestions;
@property (nonatomic, retain) NSArray *questions;
@property (nonatomic, retain) NSNumber *sortOrder;
@property (nonatomic, retain) NSString *title;

+ (id)entityName;
+ (id)uniquingKey;

- (id)description;
- (bool)isFileCollectionGroup;
- (id)questionWithRole:(id)arg1;
- (id)questions;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setQuestions:(id)arg1;

@end
