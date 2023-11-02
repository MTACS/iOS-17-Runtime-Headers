
@protocol _SFPBLocationTypeInfo <NSObject>

@required

- (NSString *)address;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAddress:(NSString *)arg1;

@end
