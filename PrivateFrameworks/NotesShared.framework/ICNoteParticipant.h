
@interface ICNoteParticipant : NSManagedObject

@property (nonatomic, retain) ICNote *note;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic, retain) NSString *userID;

@end
