
@interface ManagedRemoteBrowsingConnectionRecord : NSManagedObject

@property (nonatomic, copy) NSString *participantIdentifier;
@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
