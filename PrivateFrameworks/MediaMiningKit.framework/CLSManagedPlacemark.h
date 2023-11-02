
@interface CLSManagedPlacemark : NSManagedObject

@property (nonatomic, copy) NSString *administrativeArea;
@property (nonatomic, copy) NSString *administrativeAreaCode;
@property (nonatomic, copy) NSString *areasOfInterest;
@property (nonatomic, retain) CLSLocationCacheEntry *entry;
@property (nonatomic, copy) NSString *geoServiceProvider;
@property (nonatomic, copy) NSString *inlandWater;
@property (nonatomic) bool isIsland;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString *locality;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString *ocean;
@property (nonatomic, copy) NSString *popularityScoresOrderedByAOI;
@property (nonatomic, copy) NSString *regionIdentifier;
@property (nonatomic) double regionLatitude;
@property (nonatomic) double regionLongitude;
@property (nonatomic) double regionRadius;
@property (nonatomic, retain) NSData *revGeoLocationData;
@property (nonatomic, copy) NSString *subAdministrativeArea;
@property (nonatomic, copy) NSString *subLocality;
@property (nonatomic, copy) NSString *subThoroughfare;
@property (nonatomic, copy) NSString *thoroughfare;

+ (id)entityName;

@end
