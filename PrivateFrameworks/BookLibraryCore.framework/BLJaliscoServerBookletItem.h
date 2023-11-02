
@interface BLJaliscoServerBookletItem : NSManagedObject

@property (nonatomic, retain) BLJaliscoServerItem *parentItem;
@property (nonatomic, retain) NSNumber *size;
@property (nonatomic, retain) NSString *storeDownloadParameters;
@property (nonatomic, retain) NSString *storeID;
@property (nonatomic, retain) NSString *title;

- (id)initIntoManagedObjectContext:(id)arg1;

@end
