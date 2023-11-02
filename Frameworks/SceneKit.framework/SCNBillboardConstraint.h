
@interface SCNBillboardConstraint : SCNConstraint {
    unsigned long long  _freeAxes;
    bool  _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes;

+ (id)billboardConstraint;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)freeAxes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)preserveScale;
- (void)setFreeAxes:(unsigned long long)arg1;
- (void)setPreserveScale:(bool)arg1;

@end
