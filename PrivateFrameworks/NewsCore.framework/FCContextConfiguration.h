
@interface FCContextConfiguration : NSObject <NSCopying> {
    NSString * _contentContainerCombinationIdentifier;
    NSString * _contentContainerIdentifier;
    long long  _environment;
    bool  _isProductionContentEnvironment;
    bool  _isProductionPrivateDataEnvironment;
    NSString * _privateDataContainerCombinationIdentifier;
    NSString * _privateDataContainerIdentifier;
    NSString * _privateDataSecureContainerIdentifier;
}

@property (nonatomic, readonly, copy) NSString *contentContainerCombinationIdentifier;
@property (nonatomic, readonly, copy) NSString *contentContainerIdentifier;
@property (nonatomic, readonly, copy) NSString *contentEnvironmentDescription;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) bool isProductionContentEnvironment;
@property (nonatomic, readonly) bool isProductionPrivateDataEnvironment;
@property (nonatomic, readonly, copy) NSString *privateDataContainerCombinationIdentifier;
@property (nonatomic, readonly, copy) NSString *privateDataContainerIdentifier;
@property (nonatomic, readonly, copy) NSString *privateDataSecureContainerIdentifier;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)contentContainerCombinationIdentifier;
- (id)contentContainerIdentifier;
- (id)contentEnvironmentDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)environment;
- (id)init;
- (id)initWithEnvironment:(long long)arg1;
- (id)initWithProductionContentEnvironment:(bool)arg1 productionPrivateDataEnvironment:(bool)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7;
- (bool)isProductionContentEnvironment;
- (bool)isProductionPrivateDataEnvironment;
- (id)privateDataContainerCombinationIdentifier;
- (id)privateDataContainerIdentifier;
- (id)privateDataSecureContainerIdentifier;

@end
