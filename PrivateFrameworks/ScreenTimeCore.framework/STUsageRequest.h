
@interface STUsageRequest : NSManagedObject

@property (nonatomic, retain) NSDate *acknowledgedDate;
@property (nonatomic, retain) NSNumber *forUserDSID;
@property (nonatomic) bool isBackgroundTask;
@property (nonatomic, retain) NSDate *requestedDate;

+ (id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg1 error:(id*)arg2;
+ (id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateUsageRequestForUser:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequestForLocalUsageRequests;
+ (id)fetchRequestForUsageRequestsThatAreForRemoteUsers;

@end
