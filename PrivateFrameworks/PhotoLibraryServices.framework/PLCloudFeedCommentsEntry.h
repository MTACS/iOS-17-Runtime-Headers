
@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (nonatomic, retain) NSString *entryCloudAssetGUID;
@property (nonatomic, retain) NSOrderedSet *entryComments;
@property (nonatomic, retain) NSOrderedSet *entryLikeComments;
@property (nonatomic, readonly) NSMutableOrderedSet *mutableEntryComments;
@property (nonatomic, readonly) NSMutableOrderedSet *mutableEntryLikeComments;

+ (id)entityName;

- (id)mutableEntryComments;
- (id)mutableEntryLikeComments;
- (bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end
