
@interface BDSBookWidgetInfoMO : NSManagedObject

@property (nonatomic, copy) NSString *assetID;
@property (nonatomic, copy) NSString *cloudAssetType;
@property (nonatomic, copy) NSString *coverURL;
@property (nonatomic) bool isExplicit;
@property (nonatomic, readonly) bool isTrackedAsRecent;
@property (nonatomic, readonly, copy) NSDate *lastEngagedDate;
@property (nonatomic, copy) NSString *libraryContentAssetType;
@property (nonatomic, copy) NSString *pageProgressionDirection;
@property (nonatomic, retain) BCReadingNowDetail *readingNowDetail;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSNumber *totalDuration;

+ (id)fetchRequest;

- (id)getBookWidgetInfoObject;
- (id)initIntoManagedObjectContext:(id)arg1;

@end
