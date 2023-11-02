
@interface ManagedPlaylist : NSManagedObject

@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
