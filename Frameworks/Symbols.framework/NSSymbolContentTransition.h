
@interface NSSymbolContentTransition : NSObject <NSCopying, NSSecureCoding> {
    long long  _effectType;
}

@property (nonatomic, readonly) long long _effectType;

// Image: /System/Library/Frameworks/Symbols.framework/Symbols

+ (id)_transitionWithType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)_effectType;
- (id)_rbAnimation;
- (id)_rbOptions;
- (id)_rbOptionsMutable;
- (id)_rbOptionsWithEffectOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)ui_animationConfigurationFromSymbolImage:(id)arg1 toSymbolImage:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (bool)ui_isSupportedByBarButtonItem;
- (bool)ui_isSupportedByImageView;

@end
