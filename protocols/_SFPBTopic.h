
@protocol _SFPBTopic <NSObject>

@required

- (_SFPBFlightDetails *)flight;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)query;
- (void)setFlight:(_SFPBFlightDetails *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setQuery:(NSString *)arg1;
- (void)setSports:(_SFPBSportsDetail *)arg1;
- (void)setType:(int)arg1;
- (void)setWeather:(_SFPBWeatherDetails *)arg1;
- (_SFPBSportsDetail *)sports;
- (int)type;
- (_SFPBWeatherDetails *)weather;
- (unsigned long long)whichDetail;

@end
