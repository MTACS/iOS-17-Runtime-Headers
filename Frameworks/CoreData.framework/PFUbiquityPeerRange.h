
@interface PFUbiquityPeerRange : NSManagedObject

@property (nonatomic, retain) NSNumber *end;
@property (nonatomic, retain) PFUbiquityPeer *peer;
@property (nonatomic, retain) NSNumber *peerEnd;
@property (nonatomic, retain) NSString *peerEntityName;
@property (nonatomic, retain) NSNumber *peerStart;
@property (nonatomic, retain) NSNumber *start;
@property (nonatomic, retain) PFUbiquityStoreMetadata *storeMetadata;

@end
