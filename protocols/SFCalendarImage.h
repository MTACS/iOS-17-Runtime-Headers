
@protocol SFCalendarImage <SFImage>

@required

- (NSDate *)date;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setDate:(NSDate *)arg1;

@end
