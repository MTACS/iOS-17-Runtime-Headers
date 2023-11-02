
@interface CLSLocationCacheEntry : NSManagedObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *addressDictionaryString;
@property (nonatomic) bool coarse;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSSet *placemarks;
@property (nonatomic, copy) NSString *postalAddress;
@property (nonatomic) double updateTimestamp;

+ (id)entityName;

@end
