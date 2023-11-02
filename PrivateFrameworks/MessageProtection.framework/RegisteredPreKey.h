
@interface RegisteredPreKey : NSManagedObject

@property (nonatomic, retain) NSSet *senders;
@property (nonatomic, copy) NSString *tag;

+ (id)fetchRequest;

@end
