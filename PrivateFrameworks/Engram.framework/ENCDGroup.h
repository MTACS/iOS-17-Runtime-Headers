
@interface ENCDGroup : NSManagedObject

@property (nonatomic, retain) <ENCypher> *cypher;
@property (nonatomic, retain) ENGroupID *groupID;
@property (nonatomic) long long groupIDGeneration;
@property (nonatomic, retain) NSData *sharedApplicationData;
@property (nonatomic, retain) ENStableGroupID *stableGroupID;

+ (id)fetchRequest;
+ (id)groupFromGroup:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)predicateForGroupID:(id)arg1;
+ (id)predicateForGroupIDs:(id)arg1;
+ (id)predicateForStableGroupID:(id)arg1;

@end
