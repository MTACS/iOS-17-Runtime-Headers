
@interface PRMutablePosterDescriptorHomeScreenConfiguration : PRPosterDescriptorHomeScreenConfiguration

@property (nonatomic) bool allowsModifyingLegibilityBlur;
@property (nonatomic, copy) NSArray *preferredGradientColors;
@property (nonatomic, copy) NSArray *preferredSolidColors;
@property (nonatomic) unsigned long long preferredStyle;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

@end
