
@interface RMConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _assetByIdentifier;
    RMManagementChannel * _channel;
    NSData * _content;
    NSString * _identifier;
    NSString * _serverToken;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSDictionary *assetByIdentifier;
@property (nonatomic, readonly, copy) RMManagementChannel *channel;
@property (nonatomic, readonly, copy) NSData *content;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *serverToken;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetByIdentifier;
- (id)channel;
- (id)content;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 channel:(id)arg5 assetByIdentifier:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)serverToken;
- (id)type;

@end
