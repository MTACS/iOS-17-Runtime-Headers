
@interface PRPosterLockPosterHomeScreenAppearance : PRPosterHomeScreenAppearance {
    bool  _allowsModifyingLegibilityBlur;
    bool  _legibilityBlurEnabled;
}

@property (nonatomic, readonly) bool allowsModifyingLegibilityBlur;
@property (getter=isLegibilityBlurEnabled, nonatomic, readonly) bool legibilityBlurEnabled;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (bool)allowsModifyingLegibilityBlur;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyByTogglingLegibilityBlurEnabled;
- (id)copyWithLegibilityBlurEnabled:(bool)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegibilityBlurEnabled:(bool)arg1 allowsModifyingLegibilityBlur:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLegibilityBlurEnabled;

@end
