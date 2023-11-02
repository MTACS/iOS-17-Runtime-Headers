
@interface PDSCDRegistration : NSManagedObject

@property (nonatomic, copy) NSString *clientID;
@property (nonatomic) short entryState;
@property (nonatomic) short environment;
@property (nonatomic, copy) NSString *qualifier;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, retain) PDSCDUser *user;

+ (id)activeRegistrations;
+ (id)activeRegistrationsForClientID:(id)arg1;
+ (id)fetchRequest;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)pendingRegistrations;
+ (id)registrationFromEntry:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
+ (id)registrationsForClientID:(id)arg1;
+ (id)registrationsWithState:(unsigned char)arg1;
+ (id)uniquenessPredicateForEntry:(id)arg1;

- (id)entryWithUserCache:(id)arg1;

@end
