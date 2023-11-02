
@interface GroupKitCryptoGroupSeed : NSManagedObject

@property (nonatomic, copy) NSUUID *dedupeID;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic) long long groupVersion;
@property (nonatomic, copy) NSData *rawData;
@property (nonatomic) long long seedType;
@property (nonatomic, copy) NSString *userID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
