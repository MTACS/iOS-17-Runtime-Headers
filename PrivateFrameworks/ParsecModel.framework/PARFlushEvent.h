
@interface PARFlushEvent : PAREvent <NSFetchRequestResult>

@property (nonatomic) int type;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
