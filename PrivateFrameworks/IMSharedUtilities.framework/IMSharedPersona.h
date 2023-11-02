
@interface IMSharedPersona : NSObject <NSCopying, NSSecureCoding> {
    NSString * _senderID;
    NSString * _suggestedDisplayName;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *senderID;
@property (nonatomic, readonly, copy) NSString *suggestedDisplayName;

+ (id)personaFromDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderID:(id)arg1 suggestedDisplayName:(id)arg2;
- (id)senderID;
- (id)suggestedDisplayName;

@end
