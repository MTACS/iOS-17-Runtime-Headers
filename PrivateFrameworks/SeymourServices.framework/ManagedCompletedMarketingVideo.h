
@interface ManagedCompletedMarketingVideo : NSManagedObject

@property (nonatomic, copy) NSDate *dateWatched;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
