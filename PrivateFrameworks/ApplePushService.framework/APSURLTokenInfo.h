
@interface APSURLTokenInfo : NSObject <APSTokenInfo, NSCopying, NSSecureCoding> {
    NSData * _baseToken;
    NSDate * _expirationDate;
    NSString * _topic;
    NSData * _vapidPublicKey;
}

@property (nonatomic, retain) NSData *baseToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSData *vapidPublicKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowMultipleTokens;
- (id)baseToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTopic:(id)arg1;
- (id)initWithTopic:(id)arg1 vapidPublicKey:(id)arg2;
- (id)initWithTopic:(id)arg1 vapidPublicKey:(id)arg2 expirationDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setBaseToken:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setVapidPublicKey:(id)arg1;
- (id)topic;
- (long long)type;
- (id)vapidPublicKey;

@end
