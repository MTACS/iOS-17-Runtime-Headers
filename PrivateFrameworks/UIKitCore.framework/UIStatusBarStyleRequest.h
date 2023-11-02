
@interface UIStatusBarStyleRequest : NSObject <NSCopying, NSMutableCopying> {
    double  _foregroundAlpha;
    UIColor * _foregroundColor;
    long long  _legibilityStyle;
    NSNumber * _overrideHeight;
    long long  _style;
}

@property (nonatomic, readonly) double foregroundAlpha;
@property (nonatomic, readonly, retain) UIColor *foregroundColor;
@property (nonatomic, readonly) long long legibilityStyle;
@property (nonatomic, readonly, retain) NSNumber *overrideHeight;
@property (nonatomic, readonly) long long style;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 class:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)foregroundAlpha;
- (id)foregroundColor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStyle:(long long)arg1 legacy:(bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4;
- (id)initWithStyle:(long long)arg1 legacy:(bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 overrideHeight:(id)arg5;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 overrideHeight:(id)arg4;
- (bool)isDoubleHeight;
- (bool)isEqual:(id)arg1;
- (bool)isLegacy;
- (bool)isTranslucent;
- (long long)legibilityStyle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)overrideHeight;
- (long long)style;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

- (long long)resolvedStyle;

@end
