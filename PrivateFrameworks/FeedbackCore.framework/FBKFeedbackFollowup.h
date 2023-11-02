
@interface FBKFeedbackFollowup : FBKManagedFeedbackObject <FBKFilerForm> {
    long long  _filerFormType;
    FBKFilePredicate * _stubFilePredicate;
}

@property (readonly) NSString *choiceText;
@property (getter=isComplete) bool complete;
@property (retain) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *displayText;
@property (retain) FBKFeedback *feedback;
@property (retain) NSArray *feedbackFollowupResponses;
@property (retain) NSString *fileMatcherIds;
@property (retain) NSSet *fileMatchers;
@property (retain) NSSet *filePromises;
@property (nonatomic) long long filerFormType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInformationalFollowup;
@property (readonly) bool isVisible;
@property (readonly) NSString *negativeChoice;
@property (readonly) NSString *noChoiceText;
@property (retain) FBKParticipant *originator;
@property (readonly) NSString *platform;
@property (readonly) NSString *positiveChoice;
@property (retain) NSNumber *primitiveComplete;
@property (retain) NSOrderedSet *primitiveFeedbackFollowupResponses;
@property (retain) NSNumber *primitiveType;
@property (nonatomic, readonly) bool requiresValidationResponse;
@property bool serverSideIsComplete;
@property (nonatomic, retain) FBKFilePredicate *stubFilePredicate;
@property (readonly) Class superclass;
@property unsigned long long type;
@property (retain) NSDate *updatedAt;
@property (retain) FBKUploadTask *uploadTask;

+ (id)entityName;
+ (unsigned long long)followupTypeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_textResponsesPredicate;
- (id)allFileMatchers;
- (id)bugSessionsFromOriginalFeedback;
- (bool)canRespond;
- (id)choiceText;
- (bool)collectsFiles;
- (id)description;
- (id)feedbackFollowupResponses;
- (id)filerFormID;
- (long long)filerFormType;
- (bool)hasVisibleFiles;
- (bool)hasVisibleFilesIncludingFileResponses;
- (bool)isComplete;
- (bool)isInformationalFollowup;
- (bool)isServerSideComplete;
- (bool)isUploadingFiles;
- (bool)isVisible;
- (id)matcherPredicates;
- (bool)needsRefresh;
- (id)negativeChoice;
- (id)noChoiceText;
- (id)platform;
- (id)positiveChoice;
- (void)prepareForDeletion;
- (id)promises;
- (bool)requiresComments;
- (bool)requiresValidationResponse;
- (id)respondedToAt;
- (void)setComplete:(bool)arg1;
- (void)setFeedbackFollowupResponses:(id)arg1;
- (void)setFilerFormType:(long long)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setStubFilePredicate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)stubFilePredicate;
- (id)targetPlatform;
- (long long)textResponsesCount;
- (id)textResponsesSummary;
- (unsigned long long)type;
- (id)validationResponse;
- (id)visibleFileNamesIncludingResponsesOfTypeFileAndPromisesSorted;
- (id)visibleFilePromises;
- (id)visibleFilePromisesForResponsesAndPromisesByName;
- (id)visibleFileResponses;
- (id)visibleResponses;
- (id)visibleSortedFilePromises;

@end
