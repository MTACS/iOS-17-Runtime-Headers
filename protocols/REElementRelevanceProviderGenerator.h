
@protocol REElementRelevanceProviderGenerator

@required

- (RERelevanceProvider *)createRelevaneProviderWithType:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (NSDictionary *)encodeRelevaneProvider:(RERelevanceProvider *)arg1;

@end
