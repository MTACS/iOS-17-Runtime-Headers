
@interface CFXEffectType : NSObject {
    NSOrderedSet * _effects;
    NSString * _identifier;
    int  _jtEffectType;
    NSString * _localizedTitle;
}

@property (nonatomic, retain) NSOrderedSet *effects;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) int jtEffectType;
@property (nonatomic, copy) NSString *localizedTitle;

+ (id)effectTypeIdentifiers;
+ (id)effectTypeWithIdentifier:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)effects;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)jtEffectType;
- (id)localizedTitle;
- (void)setEffects:(id)arg1;
- (void)setJtEffectType:(int)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
