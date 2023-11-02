
@interface ENRegionVisit : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    ENRegion * _region;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) ENRegion *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)region;

@end
