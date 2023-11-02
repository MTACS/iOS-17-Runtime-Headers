
@interface PFUbiquityRemotePeerState : NSManagedObject

@property (nonatomic, retain) PFUbiquityPeer *peer;
@property (nonatomic, retain) NSString *peerID;
@property (nonatomic, retain) NSString *storeName;
@property (nonatomic, retain) NSNumber *transactionNumber;

- (id)initWithStoreName:(id)arg1 andRemotePeerID:(id)arg2 insertIntoManagedObjectContext:(id)arg3;

@end
