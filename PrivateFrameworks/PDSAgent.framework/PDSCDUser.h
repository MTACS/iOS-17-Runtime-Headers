
@interface PDSCDUser : NSManagedObject

@property (nonatomic, retain) NSSet *registrations;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic) short userType;

+ (id)fetchRequest;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)predicateForUserID:(id)arg1 userType:(short)arg2;
+ (id)userFromUser:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

- (id)user;

@end
