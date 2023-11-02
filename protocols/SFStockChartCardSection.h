
@protocol SFStockChartCardSection <SFCardSection>

@required

- (NSData *)chartData;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setChartData:(NSData *)arg1;
- (void)setThirdPartyContentURL:(NSURL *)arg1;
- (void)setType:(NSString *)arg1;
- (NSURL *)thirdPartyContentURL;
- (NSString *)type;

@end
