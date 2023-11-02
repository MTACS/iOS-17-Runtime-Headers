
@interface FBKIssueType : FBKManagedFeedbackObject

@property (retain) NSString *displayName;

+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)arg1;

@end
