
@interface PARImagesPropensity : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short image;
@property (nonatomic) short other;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short recentResult;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) short zkw;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
