
@protocol SFOpenCalculationCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)input;
- (NSData *)jsonData;
- (NSString *)output;
- (void)setInput:(NSString *)arg1;
- (void)setOutput:(NSString *)arg1;

@end
