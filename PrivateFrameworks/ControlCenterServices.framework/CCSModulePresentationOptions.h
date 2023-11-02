
@interface CCSModulePresentationOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _animateDismissal;
    bool  _animatePresentation;
    bool  _blurBackground;
}

@property (nonatomic, readonly) bool animateDismissal;
@property (nonatomic, readonly) bool animatePresentation;
@property (nonatomic, readonly) bool blurBackground;

+ (id)defaultExpandedOptions;
+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (bool)animateDismissal;
- (bool)animatePresentation;
- (bool)blurBackground;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlurBackground:(bool)arg1 animatePresentation:(bool)arg2 animateDismissal:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
