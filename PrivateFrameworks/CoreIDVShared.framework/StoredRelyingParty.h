
@interface StoredRelyingParty : NSManagedObject

@property (nonatomic, retain) NSSet *presentmentKeys;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
