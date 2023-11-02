
@interface FBKFilePredicate : FBKManagedFeedbackObject

@property (nonatomic) bool alwaysRequired;
@property (nonatomic, retain) NSSet *bugForms;
@property (nonatomic, retain) NSSet *conditions;
@property (nonatomic) long long enhancedLoggingDuration;
@property (nonatomic) long long enhancedLoggingRetryCount;
@property (nonatomic, retain) NSSet *matchers;
@property (nonatomic) bool requiresRemote;
@property (nonatomic) bool showsConsentText;

+ (id)entityName;

- (bool)satisfiedBy:(id)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;

@end
