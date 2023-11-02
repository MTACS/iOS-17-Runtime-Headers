
@interface ManagedProgramCompletion : NSManagedObject

@property (nonatomic, copy) NSString *completingSessionIdentifier;
@property (nonatomic, copy) NSDate *completionDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *programIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
