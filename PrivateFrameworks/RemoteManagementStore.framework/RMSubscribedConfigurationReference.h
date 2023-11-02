
@interface RMSubscribedConfigurationReference : NSObject <NSSecureCoding> {
    NSArray * _assets;
    RMModelDeclarationBase * _declaration;
    RMSubscriberStore * _store;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) RMModelDeclarationBase *declaration;
@property (nonatomic, readonly) RMSubscriberStore *store;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetWithIdentifier:(id)arg1;
- (id)assets;
- (id)declaration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeclaration:(id)arg1 subscriberStore:(id)arg2 assets:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReference:(id)arg1;
- (id)store;

@end
