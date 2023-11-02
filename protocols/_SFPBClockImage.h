
@protocol _SFPBClockImage <NSObject>

@required

- (int)hour;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)minute;
- (int)second;
- (void)setHour:(int)arg1;
- (void)setMinute:(int)arg1;
- (void)setSecond:(int)arg1;

@end
