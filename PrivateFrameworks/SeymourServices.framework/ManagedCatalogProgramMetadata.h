
@interface ManagedCatalogProgramMetadata : NSManagedObject

@property (nonatomic, retain) NSSet *accessibilityFeatures;
@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, retain) NSSet *contributors;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, copy) NSString *previewStreamingURL;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
