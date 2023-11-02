
@interface SLDSlotTag : UISSlotTag <NSCoding, NSCopying>

+ (unsigned long long)cacheLimit;

- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)failGradeForStyle:(id)arg1;
- (unsigned long long)hitTestInformationMaskForStyle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (id)resolvedStyleForStyle:(id)arg1;

@end
