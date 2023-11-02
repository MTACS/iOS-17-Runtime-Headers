
@interface ManagedSyncOperation : NSManagedObject

@property (nonatomic, copy) NSString *action;
@property (nonatomic) int domain;
@property (nonatomic, copy) NSString *syncIdentifier;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
