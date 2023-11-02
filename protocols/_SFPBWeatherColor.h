
@protocol _SFPBWeatherColor <NSObject>

@required

- (NSString *)condition;
- (_SFPBDate *)date;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBLatLng *)location;
- (void)setCondition:(NSString *)arg1;
- (void)setDate:(_SFPBDate *)arg1;
- (void)setLocation:(_SFPBLatLng *)arg1;

@end
