
@interface WFAppShortcutColors : NSObject <NSSecureCoding> {
    WFGradient * _backgroundGradient;
    bool  _isDefaultTintColor;
    WFColor * _tintColor;
}

@property (nonatomic, readonly) WFGradient *backgroundGradient;
@property (nonatomic, readonly) bool isDefaultTintColor;
@property (nonatomic, readonly) WFColor *tintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundGradient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplementingColors:(id)arg1 tintColor:(id)arg2;
- (bool)isDefaultTintColor;
- (id)tintColor;

@end
