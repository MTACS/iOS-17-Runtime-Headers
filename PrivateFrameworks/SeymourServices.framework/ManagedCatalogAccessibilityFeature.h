
@interface ManagedCatalogAccessibilityFeature : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramMetadata;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *feature;
@property (nonatomic, retain) NSSet *languageDisclaimer;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
