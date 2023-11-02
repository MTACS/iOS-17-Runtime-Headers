
@interface CTCATargetVectorAxis : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _offset;
    NSNumber * _range;
}

@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSNumber *range;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)offset;
- (id)range;
- (void)setOffset:(id)arg1;
- (void)setRange:(id)arg1;

@end
