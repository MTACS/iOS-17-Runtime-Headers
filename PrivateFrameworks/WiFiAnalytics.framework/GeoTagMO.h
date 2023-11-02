
@interface GeoTagMO : NSManagedObject

@property (nonatomic, retain) BSSMO *bss;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int taggedCount;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)arg1;
+ (id)geoTagsAtLocationInBand:(id)arg1 distance:(double)arg2 band:(unsigned int)arg3 moc:(id)arg4;
+ (id)geoTagsForNetwork:(id)arg1 moc:(id)arg2;
+ (id)geoTagsInBandForNetwork:(unsigned int)arg1 ssid:(id)arg2 moc:(id)arg3;
+ (bool)isNetworkWithinRangeOfLocation:(id)arg1 range:(double)arg2 location:(id)arg3 moc:(id)arg4 count:(unsigned long long*)arg5;

@end
