
@interface SKPresencePayload : NSObject <NSSecureCoding> {
    NSDictionary * _cachedPayloadDictionary;
    NSData * _payloadData;
}

@property (nonatomic, retain) NSDictionary *cachedPayloadDictionary;
@property (nonatomic, readonly) NSData *payloadData;
@property (nonatomic, readonly) NSDictionary *payloadDictionary;

+ (id)logger;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedPayloadDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadData;
- (id)payloadDictionary;
- (void)setCachedPayloadDictionary:(id)arg1;

@end
