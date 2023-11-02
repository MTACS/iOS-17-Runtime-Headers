
@interface BBAppearance : NSObject <NSCopying, NSSecureCoding> {
    BBImage * _image;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) BBImage *image;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;

+ (id)appearanceWithTitle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
