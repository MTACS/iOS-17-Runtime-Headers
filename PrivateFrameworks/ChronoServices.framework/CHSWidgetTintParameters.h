
@interface CHSWidgetTintParameters : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    bool  _accentedAlternateBackground;
    long long  _fallbackFilterStyle;
    long long  _filterStyle;
    double  _fraction;
    BSColor * _primaryTintColor;
    BSColor * _secondaryTintColor;
}

@property (nonatomic, readonly) bool accentedAlternateBackground;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long effectiveRenderingMode;
@property (nonatomic, readonly) long long fallbackFilterStyle;
@property (nonatomic, readonly) long long filterStyle;
@property (nonatomic, readonly) double fraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSColor *primaryTintColor;
@property (nonatomic, readonly) BSColor *secondaryTintColor;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithTintParameters:(id)arg1;
- (bool)accentedAlternateBackground;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)effectiveRenderingMode;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (long long)fallbackFilterStyle;
- (long long)filterStyle;
- (double)fraction;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithFilterStyle:(long long)arg1;
- (id)initWithPrimaryTintColor:(id)arg1 secondaryTintColor:(id)arg2 filterStyle:(long long)arg3 fallbackFilterStyle:(long long)arg4 fraction:(double)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryTintColor;
- (id)secondaryTintColor;

@end
