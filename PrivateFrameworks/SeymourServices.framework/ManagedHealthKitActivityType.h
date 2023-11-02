
@interface ManagedHealthKitActivityType : NSManagedObject

@property (nonatomic, retain) NSSet *modalityReference;
@property (nonatomic) long long value;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
