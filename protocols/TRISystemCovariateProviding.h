
@protocol TRISystemCovariateProviding

@required

- (NSDictionary *)dictionary;
- (id)getContextValueWithName:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (id)tri_contextValueWithName:(NSString *)arg1;

@end
