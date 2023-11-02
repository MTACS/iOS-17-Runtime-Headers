
@interface StoredProofingBiomeData : NSManagedObject

@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) bool isDonated;
@property (nonatomic, copy) NSDate *optInDate;
@property (nonatomic) bool optInStatus;
@property (nonatomic, copy) NSString *proofingDecision;
@property (nonatomic, copy) NSString *proofingSessionID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
