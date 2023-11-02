
@protocol CNEncodedFetchResponse <NSObject>

@required

- (NSData *)data;
- (NSSet *)identifierAccountingData;
- (NSDictionary *)matchInfo;

@end
