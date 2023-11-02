
@interface TRITypedFactorProvider : NSObject <NSCopying> {
    NSString * _logDesc;
    <TRINamespaceFactorProviding> * _provider;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *logDesc;
@property (nonatomic, readonly) <TRINamespaceFactorProviding> *provider;
@property (nonatomic, readonly) unsigned long long type;

+ (id)providerWithType:(unsigned long long)arg1 provider:(id)arg2 logDesc:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithReplacementLogDesc:(id)arg1;
- (id)copyWithReplacementProvider:(id)arg1;
- (id)copyWithReplacementType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 provider:(id)arg2 logDesc:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProvider:(id)arg1;
- (id)logDesc;
- (id)provider;
- (unsigned long long)type;

@end
