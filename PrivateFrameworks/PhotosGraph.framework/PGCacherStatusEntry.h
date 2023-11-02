
@interface PGCacherStatusEntry : NSManagedObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDate *lastFailedFetchedDate;
@property (nonatomic, copy) NSDate *lastSuccessfulFetchedDate;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
