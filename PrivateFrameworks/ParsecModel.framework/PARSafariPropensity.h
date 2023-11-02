
@interface PARSafariPropensity : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short goToSite;
@property (nonatomic) short localGoto;
@property (nonatomic) short localTap;
@property (nonatomic) short other;
@property (nonatomic) short parsecAppStore;
@property (nonatomic) short parsecGoto;
@property (nonatomic) short parsecMaps;
@property (nonatomic) short parsecNews;
@property (nonatomic) short parsecOther;
@property (nonatomic) short parsecStocks;
@property (nonatomic) short parsecTap;
@property (nonatomic) short parsecWeather;
@property (nonatomic) short parsecWeb;
@property (nonatomic) short parsecWiki;
@property (nonatomic) short thirdPartyCompletionOrRecentSearch;
@property (nonatomic) short thirdPartyGoto;
@property (nonatomic) short thirdPartyTap;
@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
