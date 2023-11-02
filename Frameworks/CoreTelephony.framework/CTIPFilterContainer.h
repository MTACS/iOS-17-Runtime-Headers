
@interface CTIPFilterContainer : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _filters;
}

@property (nonatomic, retain) NSArray *filters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filters;
- (id)initWithCoder:(id)arg1;
- (void)setFilters:(id)arg1;

@end
