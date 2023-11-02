
@interface StoredRandomizedBackgroundActivity : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastAttemptAt;
@property (nonatomic, copy) NSDate *lastSuccessfulAttemptAt;
@property (nonatomic, copy) NSDate *nextAttemptAt;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
