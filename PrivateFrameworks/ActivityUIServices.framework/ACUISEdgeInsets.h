
@interface ACUISEdgeInsets : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices18ActivityEdgeInsets * _edgeInsets;
}

@property (nonatomic) double bottom;
@property (nonatomic) double leading;
@property (nonatomic) double top;
@property (nonatomic) double trailing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_edgeInsets;
- (id)_initWithEdgeInsets:(id)arg1;
- (double)bottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)leading;
- (void)setBottom:(double)arg1;
- (void)setLeading:(double)arg1;
- (void)setTop:(double)arg1;
- (void)setTrailing:(double)arg1;
- (double)top;
- (double)trailing;

@end
