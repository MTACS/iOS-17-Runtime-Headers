
@interface UIPasteControlConfiguration : NSObject <NSSecureCoding> {
    bool  __shouldLayoutSynchronously;
    UIColor * _baseBackgroundColor;
    UIColor * _baseForegroundColor;
    double  _cornerRadius;
    long long  _cornerStyle;
    unsigned long long  _displayMode;
}

@property (nonatomic) bool _shouldLayoutSynchronously;
@property (nonatomic, retain) UIColor *baseBackgroundColor;
@property (nonatomic, retain) UIColor *baseForegroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) unsigned long long displayMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_shouldLayoutSynchronously;
- (id)baseBackgroundColor;
- (id)baseForegroundColor;
- (double)cornerRadius;
- (long long)cornerStyle;
- (unsigned long long)displayMode;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBaseBackgroundColor:(id)arg1;
- (void)setBaseForegroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerStyle:(long long)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)set_shouldLayoutSynchronously:(bool)arg1;

@end
