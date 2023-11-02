
@interface TKTokenAccessUserPromptInfo : NSObject <NSSecureCoding> {
    NSString * _clientDisplayName;
    NSUUID * _correlationID;
    NSString * _providerDisplayName;
}

@property (nonatomic, readonly) NSString *clientDisplayName;
@property (nonatomic, readonly) NSUUID *correlationID;
@property (nonatomic, readonly) NSString *providerDisplayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientDisplayName;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenAccessRequest:(id)arg1;
- (id)providerDisplayName;

@end
