
@interface SendingDestination : NSManagedObject

@property (nonatomic, copy) NSString *destinationHash;
@property (nonatomic, copy) NSDate *registrationDate;
@property (nonatomic) int validOutgoingCounter;

+ (id)fetchRequest;

@end
