
@interface GeneratedEncryptionKey : NSManagedObject

@property (nonatomic, retain) Channel *channel;
@property (nonatomic, copy) NSDate *dateGenerated;
@property (nonatomic, retain) NSData *originalOutgoingRatchetState;

+ (id)dateGeneratedKeyPath;
+ (id)fetchRequest;

@end
