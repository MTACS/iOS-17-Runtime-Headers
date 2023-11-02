
@protocol _SFPBEmailCommand <NSObject>

@required

- (NSString *)email;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setEmail:(NSString *)arg1;

@end
