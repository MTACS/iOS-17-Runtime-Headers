
@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic, retain) NSSet *localPeerStates;
@property (nonatomic, retain) NSString *peerCode;
@property (nonatomic, retain) NSString *peerKey;
@property (nonatomic, retain) NSSet *primaryKeyRanges;
@property (nonatomic, retain) NSSet *remoteStates;
@property (nonatomic, retain) NSSet *transactionEntries;

@end
