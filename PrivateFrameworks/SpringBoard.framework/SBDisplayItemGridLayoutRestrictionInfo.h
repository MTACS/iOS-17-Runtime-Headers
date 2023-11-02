
@interface SBDisplayItemGridLayoutRestrictionInfo : NSObject {
    unsigned long long  _cachedHash;
    unsigned long long  _layoutRestrictions;
    struct CGSize { 
        double width; 
        double height; 
    }  _restrictedSize;
}

@property (nonatomic, readonly) unsigned long long layoutRestrictions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } restrictedSize;

+ (id)layoutRestrictionInfoWithLayoutRestrictions:(unsigned long long)arg1 restrictedSize:(struct CGSize { double x1; double x2; })arg2;

- (id)_initWithLayoutRestrictions:(unsigned long long)arg1 restrictedSize:(struct CGSize { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutRestrictions;
- (struct CGSize { double x1; double x2; })restrictedSize;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
