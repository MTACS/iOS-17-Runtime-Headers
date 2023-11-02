
@protocol SFPin <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)label;
- (SFLatLng *)location;
- (NSData *)mapsData;
- (int)pinBehavior;
- (SFColor *)pinColor;
- (NSString *)pinText;
- (NSString *)resultID;
- (void)setLabel:(NSString *)arg1;
- (void)setLocation:(SFLatLng *)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(SFColor *)arg1;
- (void)setPinText:(NSString *)arg1;
- (void)setResultID:(NSString *)arg1;

@end
