
@interface RTIBarButtonGroup : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _itemWidths;
    float  _representativeItemWidth;
}

@property (nonatomic, retain) NSArray *itemWidths;
@property (nonatomic) float representativeItemWidth;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemWidths;
- (float)representativeItemWidth;
- (void)setItemWidths:(id)arg1;
- (void)setRepresentativeItemWidth:(float)arg1;

@end
