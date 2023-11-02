
@interface _UIImageSymbolTransition : NSObject <NSCopying, NSSecureCoding, _UIImageSymbolAnimationPreset> {
    id /* block */  _completionHandler;
}

@property (getter=_isValidAnimationPreset, nonatomic, readonly) bool _validAnimationPreset;
@property (nonatomic, copy) id /* block */ completionHandler;

+ (bool)supportsSecureCoding;
+ (id)transition;

- (void).cxx_destruct;
- (bool)_isSymbolEffect;
- (bool)_isSymbolTransition;
- (bool)_isValidAnimationPreset;
- (id)_nsSymbolContentTransitionRepresentation;
- (void)_performCompletionHandler;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
