
@protocol SFProductAvailability <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg1;

@end
