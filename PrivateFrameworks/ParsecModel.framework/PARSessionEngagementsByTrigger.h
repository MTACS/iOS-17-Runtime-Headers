
@interface PARSessionEngagementsByTrigger : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short client;
@property (nonatomic) short go;
@property (nonatomic) bool isSuggestion;
@property (nonatomic) bool isTopHit;
@property (nonatomic) short tap;
@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
