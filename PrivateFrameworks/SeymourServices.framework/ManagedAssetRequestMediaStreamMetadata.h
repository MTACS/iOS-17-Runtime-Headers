
@interface ManagedAssetRequestMediaStreamMetadata : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *thumbnailURL;
@property (nonatomic, copy) NSString *title;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
