
@interface BLJaliscoServerDatabase : NSManagedObject

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, retain) BLJaliscoServerInfo *server;

- (id)initIntoManagedObjectContext:(id)arg1;

@end
