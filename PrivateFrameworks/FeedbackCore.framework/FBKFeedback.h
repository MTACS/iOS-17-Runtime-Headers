
@interface FBKFeedback : FBKManagedFeedbackObject

@property (nonatomic, readonly) bool allowUnsolicitedFollowup;
@property (retain) NSString *build;
@property (retain) FBKContentItem *contentItem;
@property (retain) NSDate *createdAt;
@property (retain) NSArray *feedbackFollowupIDs;
@property (retain) NSArray *feedbackFollowups;
@property (retain) FBKFormResponse *formResponse;
@property (retain) NSNumber *formResponseID;
@property (nonatomic, readonly) FBKFormResponseStub *formResponseStub;
@property (retain) NSOrderedSet *primitiveFeedbackFollowups;
@property (retain) NSNumber *rawType;
@property (retain) FBKFeedbackStatus *status;
@property (nonatomic, readonly) unsigned long long type;
@property (retain) NSDate *updatedAt;

+ (id)entityName;

- (void)addFollowup:(id)arg1;
- (bool)allowUnsolicitedFollowup;
- (void)deleteFollowup:(id)arg1;
- (id)feedbackFollowups;
- (id)formResponseStub;
- (bool)hasEqualMetadata:(id)arg1;
- (bool)hasVisibleFollowupContent;
- (void)setFeedbackFollowups:(id)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (unsigned long long)type;
- (id)validFeedbackFollowups;

@end
