
@interface BLJaliscoServerInfo : NSManagedObject

@property (nonatomic, retain) NSString *databaseVersion;
@property (nonatomic) double lastPolledAt;
@property (nonatomic, retain) NSString *userUID;

- (id)initIntoManagedObjectContext:(id)arg1;

@end
