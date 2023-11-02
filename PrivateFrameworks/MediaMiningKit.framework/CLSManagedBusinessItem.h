
@interface CLSManagedBusinessItem : NSManagedObject

@property (nonatomic, retain) NSString *businessCategories;
@property (nonatomic) unsigned int categories;
@property (nonatomic, retain) CLSBusinessCacheEntry *entry;
@property (nonatomic, retain) NSString *geoServiceProvider;
@property (nonatomic, retain) NSString *isoCountryCode;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double radius;
@property (nonatomic) long long venueCapacity;
@property (nonatomic, retain) NSNumber *venueCapacityAsNumber;

+ (id)entityName;

- (void)setVenueCapacity:(long long)arg1;
- (long long)venueCapacity;

@end
