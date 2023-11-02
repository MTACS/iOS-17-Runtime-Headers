
@interface CFXEffect : NSObject <NSCopying> {
    NSString * _identifier;
    JFXEffect * _jtEffect;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isNone;
@property (nonatomic, retain) JFXEffect *jtEffect;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

+ (id)effectIdentifiersForEffectType:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1 forEffectType:(id)arg2;
+ (id)effectWithJTEffect:(id)arg1;
+ (void)initEffectRegistry;
+ (void)preWarmShaderCache;
+ (void)setupFactoryDelegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithJTEffect:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNone;
- (id)jtEffect;
- (id)localizedTitle;
- (void)setJtEffect:(id)arg1;

@end
