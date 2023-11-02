
@interface StoredTrustKey : NSManagedObject

@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic, copy) NSData *protectedPublicKey;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
