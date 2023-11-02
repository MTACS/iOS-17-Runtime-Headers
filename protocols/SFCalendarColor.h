
@protocol SFCalendarColor <SFColor>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)eventIdentifier;
- (NSData *)jsonData;
- (void)setEventIdentifier:(NSString *)arg1;

@end
