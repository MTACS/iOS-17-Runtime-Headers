
@interface StoredPrearmTrust : NSManagedObject

@property (nonatomic, copy) NSData *baaCertificate;
@property (nonatomic, copy) NSData *keyBlob;
@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic) bool requiresDeletion;
@property (nonatomic) short version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
