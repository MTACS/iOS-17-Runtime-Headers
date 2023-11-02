
@interface ManagedTrainerMetadata : NSManagedObject

@property (nonatomic, copy) NSString *bio;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *informalName;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, retain) NSSet *socialMediaHandles;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
