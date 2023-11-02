
@interface BLJaliscoServerItem : NSManagedObject

@property (nonatomic, retain) NSDictionary *additionalAudiobookInfo;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSString *artworkTokenCode;
@property (nonatomic, retain) NSString *artworkURLString;
@property (nonatomic, retain) NSSet *booklets;
@property (nonatomic, retain) NSString *chapterMetadataURLString;
@property (nonatomic, retain) NSString *cloudID;
@property (nonatomic, retain) NSNumber *containsAudio;
@property (nonatomic, retain) BLJaliscoServerDatabase *database;
@property (nonatomic, retain) NSString *displayVersion;
@property (nonatomic, retain) NSDate *expectedDate;
@property (nonatomic, retain) NSString *fileExtension;
@property (nonatomic, retain) NSString *genre;
@property (nonatomic, retain) NSString *hlsPlaylistURLString;
@property (nonatomic, retain) NSNumber *isAudiobook;
@property (nonatomic, retain) NSNumber *isDisabled;
@property (nonatomic, retain) NSNumber *isExplicit;
@property (nonatomic, retain) NSNumber *isHidden;
@property (nonatomic, retain) NSNumber *isPictureBook;
@property (nonatomic, retain) NSNumber *isReadAloud;
@property (nonatomic, retain) NSNumber *needsImport;
@property (nonatomic, retain) NSNumber *purchaseHistoryID;
@property (nonatomic, retain) NSDate *purchasedAt;
@property (nonatomic, retain) NSString *purchasedTokenCode;
@property (nonatomic, retain) NSString *sortedAuthor;
@property (nonatomic, retain) NSString *sortedTitle;
@property (nonatomic, retain) NSNumber *storeAccountID;
@property (nonatomic, retain) NSString *storeDownloadParameters;
@property (nonatomic, retain) NSString *storeID;
@property (nonatomic, retain) NSString *title;

- (id)initIntoManagedObjectContext:(id)arg1;

@end
