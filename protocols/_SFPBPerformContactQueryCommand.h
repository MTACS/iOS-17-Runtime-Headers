
@protocol _SFPBPerformContactQueryCommand <NSObject>

@required

- (NSString *)contactIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;

@end
