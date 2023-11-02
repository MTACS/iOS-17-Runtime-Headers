
@protocol APSTokenInfo <NSObject, NSSecureCoding, NSCopying>

@required

- (NSData *)baseToken;
- (NSDictionary *)dictionaryRepresentation;
- (NSDate *)expirationDate;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)setBaseToken:(NSData *)arg1;
- (NSString *)topic;
- (long long)type;
- (NSData *)vapidPublicKey;

@end
