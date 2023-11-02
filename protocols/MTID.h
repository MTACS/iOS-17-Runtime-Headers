
@protocol MTID <NSObject>

@required

- (NSNumber *)dsId;
- (NSDate *)effectiveDate;
- (NSDate *)expirationDate;
- (NSString *)idNamespace;
- (NSString *)idString;
- (long long)idType;
- (bool)isSynchronized;
- (double)lifespan;
- (NSDictionary *)metricsFields;

@end
