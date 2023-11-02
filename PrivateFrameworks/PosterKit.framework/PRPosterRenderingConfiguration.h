
@interface PRPosterRenderingConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDepthEffectDisabled, nonatomic, readonly) bool depthEffectDisabled;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isParallaxEnabled, nonatomic, readonly) bool parallaxEnabled;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (Class)classForArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepthEffectDisabled:(bool)arg1 parallaxEnabled:(bool)arg2;
- (id)initWithRenderingConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
