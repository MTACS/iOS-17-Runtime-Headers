
@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {
    NSMutableSet * _internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

+ (bool)isAccessorySupported:(id)arg1;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 accessories:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)shortDescription;

@end
