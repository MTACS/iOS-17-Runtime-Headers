
@protocol _SFPBCallCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)phoneNumber;
- (void)setPhoneNumber:(NSString *)arg1;

@end
