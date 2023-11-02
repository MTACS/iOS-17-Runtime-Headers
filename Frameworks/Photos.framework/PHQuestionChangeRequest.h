
@interface PHQuestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (nonatomic, copy) NSDictionary *additionalInfo;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short displayType;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic) unsigned short entityType;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedQuestion;
@property (nonatomic) short questionVersion;
@property (nonatomic) double score;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (nonatomic) unsigned short state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned short type;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)changeRequestForQuestion:(id)arg1;
+ (id)creationRequestForQuestionWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7 creationDate:(id)arg8 questionVersion:(short)arg9;
+ (void)deleteQuestions:(id)arg1;

- (id)additionalInfo;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)creationDate;
- (unsigned short)displayType;
- (void)encodeToXPCDict:(id)arg1;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)managedEntityName;
- (id)placeholderForCreatedQuestion;
- (short)questionVersion;
- (double)score;
- (void)setAdditionalInfo:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayType:(unsigned short)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityType:(unsigned short)arg1;
- (void)setQuestionVersion:(short)arg1;
- (void)setScore:(double)arg1;
- (void)setState:(unsigned short)arg1;
- (void)setType:(unsigned short)arg1;
- (unsigned short)state;
- (unsigned short)type;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_questionAdditionalInfoFromAudioAsset:(id)arg1 feedbackType:(unsigned short)arg2;
+ (unsigned short)_questionStateFromFeedbackType:(unsigned short)arg1;
+ (id)changeMemoryMusicQualityFeedbackRequestForQuestion:(id)arg1 feedbackType:(unsigned short)arg2;
+ (id)memoryMusicQualityQuestionCreationRequestForMemory:(id)arg1 audioAsset:(id)arg2 feedbackType:(unsigned short)arg3;

@end
