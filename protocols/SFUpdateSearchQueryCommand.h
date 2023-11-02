
@protocol SFUpdateSearchQueryCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (int)querySource;
- (NSString *)searchString;
- (void)setQuerySource:(int)arg1;
- (void)setSearchString:(NSString *)arg1;

@end
