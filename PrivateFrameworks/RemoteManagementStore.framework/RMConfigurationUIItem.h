
@interface RMConfigurationUIItem : NSObject <NSSecureCoding> {
    RMConfigurationUIDetails * _declarationDetails;
    NSString * _declarationIdentifier;
    NSString * _declarationServerToken;
    NSString * _declarationType;
}

@property (nonatomic, readonly) RMConfigurationUIDetails *declarationDetails;
@property (nonatomic, readonly) NSString *declarationIdentifier;
@property (nonatomic, readonly) NSString *declarationServerToken;
@property (nonatomic, readonly) NSString *declarationType;

+ (id)configurationUIItemWithConfiguration:(id)arg1 details:(id)arg2;
+ (id)configurationUIItemWithIdentifier:(id)arg1 serverToken:(id)arg2 type:(id)arg3 details:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)declarationDetails;
- (id)declarationIdentifier;
- (id)declarationServerToken;
- (id)declarationType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 details:(id)arg2;
- (id)initWithIdentifier:(id)arg1 serverToken:(id)arg2 type:(id)arg3 details:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfigurationUI:(id)arg1;

@end
