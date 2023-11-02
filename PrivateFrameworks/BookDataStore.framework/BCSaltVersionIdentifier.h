
@interface BCSaltVersionIdentifier : NSManagedObject

@property (nonatomic, retain) NSString *localSaltVersionIdentifier;
@property (nonatomic, retain) NSString *serverSaltVersionIdentifier;

+ (id)fetchRequest;

- (id)initIntoManagedObjectContext:(id)arg1;

@end
