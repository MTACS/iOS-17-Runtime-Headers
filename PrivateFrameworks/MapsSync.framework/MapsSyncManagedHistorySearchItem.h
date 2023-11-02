
@interface MapsSyncManagedHistorySearchItem : MapsSyncManagedHistoryItem

@property (nonatomic, copy) NSData *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
