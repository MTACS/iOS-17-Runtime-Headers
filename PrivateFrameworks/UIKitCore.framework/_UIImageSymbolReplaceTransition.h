
@interface _UIImageSymbolReplaceTransition : _UIImageSymbolTransition {
    bool  _byLayer;
    long long  _style;
}

@property (nonatomic) bool byLayer;
@property (nonatomic) long long style;

+ (bool)supportsSecureCoding;
+ (id)transition;

- (bool)_isValidAnimationPreset;
- (id)_nsSymbolContentTransitionRepresentation;
- (bool)byLayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setByLayer:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
