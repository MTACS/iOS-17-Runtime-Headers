
@interface PARSpotlightPropensity : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short appLaunch;
@property (nonatomic) short onDeviceAddressBookData;
@property (nonatomic) short onDeviceOtherPersonalData;
@property (nonatomic) short other;
@property (nonatomic) short parsec;
@property (nonatomic) short parsecAppStore;
@property (nonatomic) short parsecMaps;
@property (nonatomic) short parsecNews;
@property (nonatomic) short parsecOther;
@property (nonatomic) short parsecStocks;
@property (nonatomic) short parsecWeather;
@property (nonatomic) short parsecWeb;
@property (nonatomic) short parsecWiki;
@property (nonatomic) short punchout;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short siriSuggestions;
@property (nonatomic) short thirdPartyInAppContent;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) short webSuggestions;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
