
@protocol CPAccNavUpdateProtocol <NSObject, NSCopying, NSSecureCoding>

@required

+ (NSDictionary *)accNavParameterKeysIndexed;
+ (NSArray *)accNavParameters;
+ (NSDictionary *)accNavParametersIndexed;

- (void)clearValueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (id)valueForKey:(NSString *)arg1;

@end
