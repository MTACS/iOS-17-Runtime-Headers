
@interface ManagedLanguageDisclaimer : NSManagedObject

@property (nonatomic, retain) NSSet *capabilities;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) bool isPrimary;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
