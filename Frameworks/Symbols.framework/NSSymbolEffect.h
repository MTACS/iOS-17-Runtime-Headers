
@interface NSSymbolEffect : NSObject <NSCopying, NSSecureCoding> {
    long long  _effectType;
}

@property (nonatomic, readonly) long long _effectType;

// Image: /System/Library/Frameworks/Symbols.framework/Symbols

+ (void)_addLayerBehavior:(long long)arg1 ToOptions:(id)arg2;
+ (id)_effectWithType:(long long)arg1;
+ (void)_mergeEffectOptions:(id)arg1 IntoRBOptions:(id)arg2;
+ (bool)supportsSecureCoding;

- (long long)_effectType;
- (id)_rbAnimation;
- (id)_rbOptions;
- (id)_rbOptionsMutable;
- (id)_rbOptionsWithEffectOptions:(id)arg1;
- (void)_setEffectType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)ui_animationConfigurationWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (bool)ui_effectRepeatsIndefinitelyByDefault;
- (bool)ui_effectSupportsRepeat;
- (bool)ui_isSupportedByBarButtonItem;
- (bool)ui_isSupportedByImageView;
- (unsigned int)ui_rbAnimation;

@end
