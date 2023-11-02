
@interface PlusMediaReferenceCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *mediaId;
@property (nonatomic, retain) PlusMediaSuggestionCoreDataRecord *mediaSuggestion;
@property (nonatomic, retain) PlusMediaReferenceSourceAppCoreDataRecord *sourceApp;
@property (nonatomic, retain) PlusStorefrontCoreDataRecord *storefront;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
