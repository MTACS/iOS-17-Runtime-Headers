
@interface SenderPublicIdentity : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *destinationHash;
@property (nonatomic, retain) RegisteredPreKey *messagedKey;
@property (nonatomic, retain) NSData *skippedCounters;
@property (nonatomic) int upperBufferIndex;

+ (id)fetchRequest;

@end
