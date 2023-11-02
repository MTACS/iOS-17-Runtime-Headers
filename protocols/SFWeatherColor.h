
@protocol SFWeatherColor <SFColor>

@required

- (NSString *)condition;
- (NSDate *)date;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFLatLng *)location;
- (void)setCondition:(NSString *)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setLocation:(SFLatLng *)arg1;

@end
