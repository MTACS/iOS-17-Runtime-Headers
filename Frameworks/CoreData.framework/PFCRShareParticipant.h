
@interface PFCRShareParticipant : NSManagedObject

@property (nonatomic, retain) NSString *participantID;
@property (nonatomic, retain) PFCRShare *share;

@end
