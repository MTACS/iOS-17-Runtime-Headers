
@interface QLToolbarButtonOption : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _style;
    NSString * _title;
}

@property (readonly) NSString *identifier;
@property long long style;
@property (copy) NSString *title;

+ (id)cancelOption;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isCancel;
- (bool)isEqual:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
