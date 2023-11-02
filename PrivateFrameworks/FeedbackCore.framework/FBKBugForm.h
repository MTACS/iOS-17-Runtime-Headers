
@interface FBKBugForm : FBKManagedFeedbackObject {
    NSURL * announcementTempFile;
    NSNumber * boxedFormRole;
    NSString * cachedAnnouncementHTML;
    bool  generatingTemp;
}

@property (nonatomic) bool active;
@property (retain) NSURL *announcementTempFile;
@property (nonatomic, retain) NSNumber *boxedFormRole;
@property (readonly) NSURL *cachedAnnouncementFile;
@property (nonatomic, retain) NSString *cachedAnnouncementHTML;
@property (nonatomic) long long feedbackType;
@property (nonatomic, retain) NSSet *filePredicates;
@property (nonatomic, retain) NSSet *formResponses;
@property (readonly) NSString *fullAnnouncementHTML;
@property bool generatingTemp;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *platform;
@property (nonatomic, retain) NSNumber *primitiveFeedbackType;
@property (nonatomic, retain) NSOrderedSet *primitiveQuestionGroups;
@property (nonatomic, retain) NSArray *questionGroups;
@property (nonatomic, retain) NSString *repeatPer;
@property (nonatomic) long long role;
@property (nonatomic) bool shouldRepeat;
@property (nonatomic, retain) NSString *signature;
@property (nonatomic, retain) FBKBugFormStub *stub;
@property (readonly) NSString *surveyAnnouncementHTML;
@property (nonatomic, retain) FBKContentItem *surveyContentItem;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSDate *updatedAt;

+ (long long)bugFormRoleFromString:(id)arg1;
+ (long long)bugFormTypeFromString:(id)arg1;
+ (id)entityName;

- (void).cxx_destruct;
- (id)announcementTempFile;
- (id)boxedFormRole;
- (id)cachedAnnouncementFile;
- (id)cachedAnnouncementHTML;
- (bool)canTakeForTeam:(id)arg1;
- (bool)collectsFiles;
- (id)completedResponsesContentItems;
- (id)completedResponsesContentItemsForTeam:(id)arg1;
- (id)description;
- (id)draftResponsesContentItems;
- (id)draftResponsesContentItemsForTeam:(id)arg1;
- (long long)feedbackType;
- (id)feedbackTypeRank;
- (id)fullAnnouncementHTML;
- (bool)generatingTemp;
- (bool)isSurveyAvailable;
- (id)issueAreaDisplayNameForKeyword:(id)arg1;
- (id)localizedFeedbackTypeName;
- (id)localizedFeedbackTypeShortName;
- (bool)matchesFormStubSignature:(id)arg1;
- (id)questionForQuestionID:(id)arg1;
- (id)questionGroupForQuestionID:(id)arg1;
- (id)questionGroups;
- (id)questionWithRole:(id)arg1;
- (bool)requiresPreview;
- (long long)role;
- (void)setAnnouncementTempFile:(id)arg1;
- (void)setBoxedFormRole:(id)arg1;
- (void)setCachedAnnouncementHTML:(id)arg1;
- (void)setFeedbackType:(long long)arg1;
- (void)setGeneratingTemp:(bool)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setQuestionGroups:(id)arg1;
- (void)setRole:(long long)arg1;
- (id)signatureDescription;
- (id)surveyActionTextForTeam:(id)arg1;
- (id)surveyAnnouncementHTML;
- (void)updateResolvableQuestions;

@end
