
@interface FBKFileMatcher : FBKManagedFeedbackObject {
    NSRegularExpression * _regularExpression;
}

@property (retain) NSString *deBundleIdentifier;
@property (retain) NSSet *feedbackFollowups;
@property (retain) NSSet *filePredicates;
@property (retain) NSString *instructionsAsHTML;
@property (nonatomic, retain) NSString *localizedDataCollectedExplanation;
@property (nonatomic, retain) NSString *localizedDataCollectedSummary;
@property (retain) NSString *name;
@property (retain) NSString *operationName;
@property (retain) NSString *platform;
@property (retain) NSRegularExpression *regularExpression;
@property (retain) NSString *regularExpressionPattern;

+ (id)assetNameForFile:(id)arg1;
+ (id)entityName;
+ (id)iconForFileName:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)hasPlatform;
- (id)iconForRequirement;
- (bool)matchesFilename:(id)arg1;
- (id)regularExpression;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setRegularExpression:(id)arg1;

@end
