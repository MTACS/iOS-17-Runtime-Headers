
@interface AXCustomContent : NSObject <NSCopying, NSSecureCoding> {
    NSAttributedString * _attributedLabel;
    NSAttributedString * _attributedValue;
    unsigned long long  _importance;
    NSString * _label;
    NSString * _value;
}

@property (nonatomic, copy) NSAttributedString *attributedLabel;
@property (nonatomic, copy) NSAttributedString *attributedValue;
@property (nonatomic) unsigned long long importance;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *value;

+ (id)customContentWithAttributedLabel:(id)arg1 attributedValue:(id)arg2;
+ (id)customContentWithLabel:(id)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)attributedLabel;
- (id)attributedValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)importance;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)setAttributedLabel:(id)arg1;
- (void)setAttributedValue:(id)arg1;
- (void)setImportance:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
