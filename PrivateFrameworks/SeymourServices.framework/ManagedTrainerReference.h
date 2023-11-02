
@interface ManagedTrainerReference : NSManagedObject

@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *informalName;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
