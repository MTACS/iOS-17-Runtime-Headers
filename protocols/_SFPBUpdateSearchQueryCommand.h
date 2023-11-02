
@protocol _SFPBUpdateSearchQueryCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)querySource;
- (NSString *)searchString;
- (void)setQuerySource:(int)arg1;
- (void)setSearchString:(NSString *)arg1;

@end
