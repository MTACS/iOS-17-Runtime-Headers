
@interface FBKFormResponseStub : FBKManagedFeedbackObject

@property (nonatomic, retain) FBKContentItem *contentItem;
@property (nonatomic, readonly) FBKFeedback *feedback;
@property (nonatomic, retain) NSSet *filePromiseStubs;
@property (readonly) NSNumber *followupCount;
@property (nonatomic, copy) NSNumber *formID;
@property (readonly) bool isSubmitted;
@property (nonatomic, retain) NSArray *questionGroupStubs;
@property (nonatomic, copy) NSNumber *remoteID;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, copy) NSDate *submittedAt;
@property (nonatomic, copy) NSDate *updatedAt;

+ (id)entityName;
+ (id)fetchRequest;

- (id)feedback;
- (id)followupCount;
- (bool)isSubmitted;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (id)visibleFilePromises;

@end
