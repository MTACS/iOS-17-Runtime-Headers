
@interface FTLocalMessageProperties : NSManagedObject

@property (nonatomic, copy) NSUUID *recordUUID;
@property (nonatomic) int voicemailID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
