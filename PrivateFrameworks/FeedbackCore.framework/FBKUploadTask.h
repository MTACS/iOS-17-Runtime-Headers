
@interface FBKUploadTask : NSManagedObject

@property (retain) NSSet *bugSessions;
@property (retain) NSNumber *bytesToUpload;
@property (retain) NSNumber *bytesUploaded;
@property (retain) FBKFeedbackFollowup *feedbackFollowup;
@property (retain) NSURL *fileURL;
@property (retain) FBKFormResponse *formResponse;
@property (retain) NSError *lastError;
@property unsigned long long localSubmissionStage;
@property (retain) NSNumber *primitiveLocalSubmissionStage;
@property (retain) NSNumber *primitiveTaskState;
@property (retain) NSNumber *taskIdentifier;
@property long long taskState;

+ (id)entityName;

- (void)addFBKSessionsWithDEDSessions:(id)arg1;
- (bool)allSessionsHaveReportedState;
- (bool)allSessionsHaveReportedUploadSize;
- (bool)allSessionsHaveState:(long long)arg1;
- (id)filerForm;
- (id)formID;
- (bool)isBugSessionBacked;
- (unsigned long long)localSubmissionStage;
- (unsigned long long)newSubmissionStageAfterBugSessionUpdate;
- (void)setLocalSubmissionStage:(unsigned long long)arg1;
- (void)setTaskState:(long long)arg1;
- (long long)taskState;
- (void)updateBytesToUploadAndUploadedAfterBugSessionUpdate;

@end
