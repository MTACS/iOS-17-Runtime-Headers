
@protocol UIImageConfiguration <NSObject, NSCopying, NSSecureCoding>

@required

- (id)configurationByApplyingConfiguration:(UIImageConfiguration *)arg1;
- (id)configurationWithTraitCollection:(UITraitCollection *)arg1;
- (UITraitCollection *)traitCollection;

@end
