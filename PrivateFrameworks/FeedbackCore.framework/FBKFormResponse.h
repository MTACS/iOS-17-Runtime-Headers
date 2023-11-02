
@interface FBKFormResponse : FBKManagedFeedbackObject <FBKFilerForm> {
    long long  _filerFormType;
}

@property (retain) NSSet *answers;
@property (retain) FBKBugForm *bugForm;
@property (retain) NSString *buildString;
@property (getter=isCompleted) bool completed;
@property (retain) FBKContentItem *contentItem;
@property (retain) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *draftDevices;
@property (retain) NSNumber *extractedFollowupCount;
@property (retain) NSString *extractedIssueType;
@property (retain) NSString *extractedProblemDescription;
@property (retain) NSString *extractedTitle;
@property (retain) FBKFeedback *feedback;
@property (retain) NSNumber *feedbackID;
@property (retain) NSSet *filePromises;
@property (nonatomic) long long filerFormType;
@property (readonly) NSNumber *followupCount;
@property (nonatomic, retain) NSNumber *formID;
@property (readonly) unsigned long long hash;
@property bool isStub;
@property (readonly) NSString *issueType;
@property (readonly) FBKAnswer *issueTypeAnswer;
@property (retain) NSArray *issueTypeAnswers;
@property (retain) NSString *largeFilePrefix;
@property (readonly) NSString *platform;
@property (retain) NSNumber *primitiveCompleted;
@property (readonly) NSString *problemDescription;
@property (readonly) FBKAnswer *problemDescriptionAnswer;
@property (retain) NSArray *problemDescriptionAnswers;
@property bool remote;
@property bool serverSideIsComplete;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (readonly) FBKAnswer *titleAnswer;
@property (retain) NSArray *titleAnswers;
@property (retain) NSDate *updatedAt;
@property (retain) FBKUploadTask *uploadTask;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingFollowupCount;
+ (id)keyPathsForValuesAffectingIssueType;
+ (id)keyPathsForValuesAffectingIssueTypeAnswer;
+ (id)keyPathsForValuesAffectingProblemDescription;
+ (id)keyPathsForValuesAffectingProblemDescriptionAnswer;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingTitleAnswer;

- (id)answerForQuestion:(id)arg1;
- (id)answerForQuestionID:(id)arg1;
- (id)answersDictionary;
- (bool)collectsFiles;
- (bool)evaluateConditional:(id)arg1;
- (id)fileMatchers;
- (id)filerFormID;
- (long long)filerFormType;
- (id)findAnswerForRole:(id)arg1;
- (id)followupCount;
- (id)formPlatform;
- (bool)isAnswerExpectedForQuestion:(id)arg1;
- (bool)isCompleted;
- (bool)isServerSideComplete;
- (id)issueType;
- (id)issueTypeAnswer;
- (id)matcherPredicates;
- (bool)needsRefresh;
- (id)platform;
- (void)prepareForDeletion;
- (id)problemDescription;
- (id)problemDescriptionAnswer;
- (id)promises;
- (void)setCompleted:(bool)arg1;
- (void)setFilerFormType:(long long)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setValue:(id)arg1 forQuestionID:(id)arg2;
- (id)title;
- (id)titleAnswer;
- (void)updateExtractedValuesFromAnswers;
- (id)valueForQuestionID:(id)arg1;
- (id)valuesForQuestionID:(id)arg1;

@end
