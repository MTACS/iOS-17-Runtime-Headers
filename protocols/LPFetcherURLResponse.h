
@protocol LPFetcherURLResponse <NSObject>

@required

+ (bool)isValidMIMEType:(NSString *)arg1;
+ (LPFetcherResponse *)responseForFetcher:(LPFetcher *)arg1 withData:(NSData *)arg2 MIMEType:(NSString *)arg3;

@end
