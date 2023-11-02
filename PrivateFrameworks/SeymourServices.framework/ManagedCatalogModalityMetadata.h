
@interface ManagedCatalogModalityMetadata : NSManagedObject

@property (nonatomic, copy) NSString *abridgedSummary;
@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, copy) NSString *summary;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
