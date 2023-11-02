
@interface ICQUpgradeFlowOptions : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _buttonTintColor;
    UIColor * _navigationBarTintColor;
}

@property (nonatomic, copy) UIColor *buttonTintColor;
@property (nonatomic, copy) UIColor *navigationBarTintColor;

+ (id)flowOptionsFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttonTintColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)navigationBarTintColor;
- (id)serializedData;
- (void)setButtonTintColor:(id)arg1;
- (void)setNavigationBarTintColor:(id)arg1;

@end
