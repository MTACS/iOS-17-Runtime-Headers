
@interface HUQuickControlVisualEffect : UIVisualEffect {
    unsigned long long  _effectType;
}

@property (nonatomic, readonly) unsigned long long effectType;

+ (id)effectWithType:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectConfig;
- (unsigned long long)effectType;

@end
