
@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>

@required

- (NSMutableDictionary *)dictionary;
- (NSString *)encodedClassName;
- (NSString *)groupIdentifier;
- (id)init;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (NSMutableDictionary *)properties;

@end
