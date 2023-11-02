
@interface PLCloudSharedComment : PLManagedObject

@property (nonatomic, retain) PLCloudFeedCommentsEntry *cloudFeedCommentEntry;
@property (nonatomic, readonly) PLCloudFeedCommentsEntry *cloudFeedEntry;
@property (nonatomic, retain) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic, retain) NSDate *commentClientDate;
@property (nonatomic, retain) NSDate *commentDate;
@property (nonatomic, retain) NSString *commentText;
@property (nonatomic, retain) NSString *commentType;
@property (nonatomic, retain) PLManagedAsset *commentedAsset;
@property (nonatomic, readonly) NSString *commenterEmail;
@property (nonatomic, readonly) NSString *commenterFirstName;
@property (nonatomic, readonly) NSString *commenterFullName;
@property (nonatomic, retain) NSString *commenterHashedPersonID;
@property (nonatomic, readonly) NSString *commenterLastName;
@property (nonatomic, retain) NSNumber *isBatchComment;
@property (nonatomic, retain) NSNumber *isCaption;
@property (nonatomic, retain) NSNumber *isDeletable;
@property (nonatomic, retain) NSNumber *isLike;
@property (nonatomic, readonly) bool isLikeBoolValue;
@property (nonatomic, retain) NSNumber *isMyComment;
@property (nonatomic, retain) PLManagedAsset *likedAsset;

+ (id)_cloudSharedCommentsWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedCommentsWithCommentDate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudSharedCommentsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)entityName;
+ (id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(bool)arg4 isMyComment:(bool)arg5 inLibrary:(id)arg6;

- (bool)_isInterestingToUser;
- (id)asset;
- (void)awakeFromInsert;
- (bool)canBeDeletedByUser;
- (id)cloudFeedEntry;
- (id)commenterDisplayName;
- (id)commenterEmail;
- (id)commenterFirstName;
- (id)commenterFullName;
- (id)commenterLastName;
- (id)init;
- (bool)isInterestingForAlbumsSorting;
- (bool)isLikeBoolValue;
- (bool)matchesCommentText:(id)arg1 isLike:(bool)arg2;
- (void)performDelete;
- (void)prepareForDeletion;
- (bool)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(bool*)arg2;
- (void)willSave;

@end
