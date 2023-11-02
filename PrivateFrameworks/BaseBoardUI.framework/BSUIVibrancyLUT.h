
@interface BSUIVibrancyLUT : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    double  _blend;
    NSURL * _bundleURL;
    UIImage * _interpolatedLutImage;
    NSString * _lutIdentifier;
    NSString * _toIdentifier;
}

@property (readonly) double blend;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (copy) UIImage *interpolatedLutImage;
@property (nonatomic, readonly, copy) NSString *lutIdentifier;
@property (nonatomic, readonly, copy) CAFilter *resolvedLUTFilter;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *toIdentifier;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (double)blend;
- (id)bundleURL;
- (bool)canReuseInterpolatedLUTWithBlend:(double)arg1 toIdentifier:(id)arg2;
- (id)copyWithBlend:(double)arg1 toIdentifier:(id)arg2;
- (id)copyWithLuminanceReduced:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleURL:(id)arg2;
- (id)initWithIdentifier:(id)arg1 bundleURL:(id)arg2 blend:(double)arg3 toIdentifier:(id)arg4;
- (id)interpolatedImageWithFirstImage:(id)arg1 secondImage:(id)arg2 blend:(double)arg3;
- (id)interpolatedLutImage;
- (bool)isEqual:(id)arg1;
- (id)lutIdentifier;
- (id)resolvedLUTFilter;
- (void)setInterpolatedLutImage:(id)arg1;
- (void)setToIdentifier:(id)arg1;
- (bool)shouldUseInterpolatedLUTForBlend:(double)arg1 toIdentifier:(id)arg2;
- (id)toIdentifier;

@end
