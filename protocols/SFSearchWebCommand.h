
@protocol SFSearchWebCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)searchString;
- (void)setSearchString:(NSString *)arg1;

@end
