
@protocol SFClockImage <SFImage>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSNumber *)hour;
- (NSData *)jsonData;
- (NSNumber *)minute;
- (NSNumber *)second;
- (void)setHour:(NSNumber *)arg1;
- (void)setMinute:(NSNumber *)arg1;
- (void)setSecond:(NSNumber *)arg1;

@end
