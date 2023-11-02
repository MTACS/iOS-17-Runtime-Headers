
@interface FBKFilePredicateCondition : FBKManagedFeedbackObject

@property (nonatomic, retain) NSString *questionTat;
@property (nonatomic, retain) NSString *questionValue;

+ (id)entityName;

- (id)description;
- (void)setPropertiesFromJSONObject:(id)arg1;

@end
