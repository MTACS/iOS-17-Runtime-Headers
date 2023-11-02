
@interface ManagedCatalogModalityReference : NSManagedObject

@property (nonatomic, retain) NSSet *alternativeActivityTypes;
@property (nonatomic, retain) NSSet *features;
@property (nonatomic, retain) NSSet *filterPropertyTypes;
@property (nonatomic, retain) NSOrderedSet *healthKitActivityTypes;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
