
@protocol _SFPBSearchWebCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)searchString;
- (void)setSearchString:(NSString *)arg1;

@end
