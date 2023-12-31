
@interface TVRCButton : NSObject <NSSecureCoding> {
    long long  _buttonType;
    bool  _enabled;
    bool  _hasTapAction;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) long long buttonType;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) bool hasTapAction;
@property (nonatomic, readonly, copy) NSDictionary *properties;

+ (bool)_isMediaButtonEvent:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithButtonType:(long long)arg1;
- (id)_initWithButtonType:(long long)arg1 hasTapAction:(bool)arg2 properties:(id)arg3;
- (void)_setEnabled:(bool)arg1;
- (long long)buttonType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTapAction;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToButton:(id)arg1;
- (id)properties;

@end
