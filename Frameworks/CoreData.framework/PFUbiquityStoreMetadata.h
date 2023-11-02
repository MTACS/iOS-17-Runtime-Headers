
@interface PFUbiquityStoreMetadata : NSManagedObject

@property (nonatomic, retain) NSString *modelVersionHashString;
@property (nonatomic, retain) NSSet *peerStates;
@property (nonatomic, retain) NSSet *primaryKeyRanges;
@property (nonatomic, retain) NSString *storeIdentifier;
@property (nonatomic, retain) NSData *storeOptionsBinaryPlistData;
@property (nonatomic, retain) NSString *storeType;
@property (nonatomic, retain) NSString *storeURLString;
@property (nonatomic, retain) NSSet *transactionEntries;
@property (nonatomic, retain) NSString *ubiquityName;
@property (nonatomic, retain) NSString *ubiquityRelativePath;
@property (nonatomic, retain) NSString *ubiquityRootURLString;

- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;

@end
