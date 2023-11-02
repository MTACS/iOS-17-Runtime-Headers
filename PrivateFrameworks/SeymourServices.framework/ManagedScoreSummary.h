
@interface ManagedScoreSummary : NSManagedObject

@property (nonatomic, retain) ManagedArchivedSession *archivedSession;
@property (nonatomic) float communityLowerMiddleScore;
@property (nonatomic) float communityLowerScore;
@property (nonatomic) float communityUpperMiddleScore;
@property (nonatomic) float communityUpperScore;
@property (nonatomic) int elapsedSeconds;
@property (nonatomic) float personalScore;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
