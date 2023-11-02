
@interface HealthPlatformCore.EncodedFeatureTag : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) _TtC18HealthPlatformCore8FeedItem *feedItem;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
