
@protocol _SFPBCalendarImage <NSObject>

@required

- (_SFPBDate *)date;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setDate:(_SFPBDate *)arg1;

@end
