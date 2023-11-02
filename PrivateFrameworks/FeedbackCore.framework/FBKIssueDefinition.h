
@interface FBKIssueDefinition : FBKManagedFeedbackObject

@property (retain) NSSet *fileMatchers;
@property (retain) NSNumber *issueAreaID;
@property (retain) NSNumber *issueTypeID;

+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)arg1;

@end
