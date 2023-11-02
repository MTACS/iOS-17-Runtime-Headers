
@interface PFUbiquityPeerState : NSManagedObject

@property (nonatomic, retain) NSString *lastProcessedTransactionLogURL;
@property (nonatomic, retain) PFUbiquityPeer *peer;
@property (nonatomic, retain) PFUbiquityStoreMetadata *storeMetadata;
@property (nonatomic, retain) NSString *storeName;
@property (nonatomic, retain) NSNumber *transactionNumber;

- (id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
