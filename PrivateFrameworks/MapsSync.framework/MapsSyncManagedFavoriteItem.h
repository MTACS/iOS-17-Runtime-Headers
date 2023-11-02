
@interface MapsSyncManagedFavoriteItem : NSManagedObject

@property (nonatomic, retain) NSSet *contactHandles;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) bool hidden;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
