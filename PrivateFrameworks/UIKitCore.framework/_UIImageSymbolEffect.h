
@interface _UIImageSymbolEffect : NSObject <NSCopying, NSSecureCoding, _UIImageSymbolAnimationPreset> {
    id /* block */  _completionHandler;
}

@property (nonatomic, readonly) long long _desiredScale;
@property (nonatomic, readonly) long long _desiredVisibility;
@property (nonatomic, readonly) long long _stateUpdateType;
@property (getter=_isValidAnimationPreset, nonatomic, readonly) bool _validAnimationPreset;
@property (nonatomic, copy) id /* block */ completionHandler;

+ (id)effect;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_desiredScale;
- (long long)_desiredVisibility;
- (bool)_isSymbolEffect;
- (bool)_isSymbolTransition;
- (bool)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (void)_performCompletionHandler;
- (long long)_stateUpdateType;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
