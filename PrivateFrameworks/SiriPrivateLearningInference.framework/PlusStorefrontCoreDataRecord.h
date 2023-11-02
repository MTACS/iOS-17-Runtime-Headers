
@interface PlusStorefrontCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *storefrontId;
@property (nonatomic, retain) NSSet *storefrontMediaReferences;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
