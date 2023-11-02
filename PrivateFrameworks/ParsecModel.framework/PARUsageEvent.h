
@interface PARUsageEvent : PAREvent <NSFetchRequestResult>

@property (nonatomic) bool activeDays;
@property (nonatomic) int clientIntVal;
@property (nonatomic) bool invokedDays;
@property (nonatomic) int numSearchEngagements;
@property (nonatomic) bool searchedDays;
@property (nonatomic) bool suggestionOrAppleResultEngagedDays;
@property (nonatomic) bool voiceSearchDays;
@property (nonatomic) bool webEngagedDays;
@property (nonatomic) bool zkwEngagedDays;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
