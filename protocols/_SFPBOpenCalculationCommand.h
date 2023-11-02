
@protocol _SFPBOpenCalculationCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (NSString *)output;
- (void)setInput:(NSString *)arg1;
- (void)setOutput:(NSString *)arg1;

@end
