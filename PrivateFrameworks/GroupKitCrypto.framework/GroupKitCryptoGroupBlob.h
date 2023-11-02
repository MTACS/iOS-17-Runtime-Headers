
@interface GroupKitCryptoGroupBlob : NSManagedObject

@property (nonatomic, copy) NSData *blobData;
@property (nonatomic, copy) NSUUID *dedupeID;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic) long long groupVersion;
@property (nonatomic, copy) NSString *userID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
