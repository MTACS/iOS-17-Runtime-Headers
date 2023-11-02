
@interface APSAppTokenInfo : NSObject <APSTokenInfo, NSCopying, NSSecureCoding> {
    NSData * _baseToken;
    NSDate * _expirationDate;
    NSString * _identifier;
    bool  _isUnextended;
    NSString * _topic;
}

@property (nonatomic, retain) NSData *baseToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isUnextended;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSData *vapidPublicKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initUnextendedAppTokenWithTopic:(id)arg1 identifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTopic:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isUnextended;
- (void)setBaseToken:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsUnextended:(bool)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;
- (long long)type;
- (id)vapidPublicKey;

@end
