
@protocol _SFPBCalendarColor <NSObject>

@required

- (NSString *)eventIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setEventIdentifier:(NSString *)arg1;

@end
