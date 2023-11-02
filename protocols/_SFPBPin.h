
@protocol _SFPBPin <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)label;
- (_SFPBLatLng *)location;
- (NSData *)mapsData;
- (int)pinBehavior;
- (_SFPBColor *)pinColor;
- (NSString *)pinText;
- (NSString *)resultID;
- (void)setLabel:(NSString *)arg1;
- (void)setLocation:(_SFPBLatLng *)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(_SFPBColor *)arg1;
- (void)setPinText:(NSString *)arg1;
- (void)setResultID:(NSString *)arg1;

@end
