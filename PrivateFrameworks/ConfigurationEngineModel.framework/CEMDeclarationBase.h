
@interface CEMDeclarationBase : CEMPayloadBase {
    NSString * _declarationActivationScope;
    NSString * _declarationDescription;
    NSString * _declarationIdentifier;
    CEMAnyPayload * _declarationPayload;
    NSNumber * _declarationRequiresNetworkTether;
    NSString * _declarationServerHash;
    NSString * _declarationType;
}

@property (nonatomic, copy) NSString *declarationActivationScope;
@property (nonatomic, copy) NSString *declarationDescription;
@property (nonatomic, copy) NSString *declarationIdentifier;
@property (nonatomic, copy) CEMAnyPayload *declarationPayload;
@property (nonatomic, copy) NSNumber *declarationRequiresNetworkTether;
@property (nonatomic, copy) NSString *declarationServerHash;
@property (nonatomic, copy) NSString *declarationType;

+ (id)declarationClass;
+ (id)declarationForData:(id)arg1 error:(id*)arg2;
+ (id)declarationForPayload:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declarationActivationScope;
- (id)declarationDescription;
- (id)declarationIdentifier;
- (id)declarationPayload;
- (id)declarationRequiresNetworkTether;
- (id)declarationServerHash;
- (id)declarationType;
- (bool)loadDeclarationFromDictionary:(id)arg1 error:(id*)arg2;
- (id)serialize;
- (id)serializeAsDataWithError:(id*)arg1;
- (void)setDeclarationActivationScope:(id)arg1;
- (void)setDeclarationDescription:(id)arg1;
- (void)setDeclarationIdentifier:(id)arg1;
- (void)setDeclarationPayload:(id)arg1;
- (void)setDeclarationRequiresNetworkTether:(id)arg1;
- (void)setDeclarationServerHash:(id)arg1;
- (void)setDeclarationType:(id)arg1;
- (void)updateServerHash;

@end
