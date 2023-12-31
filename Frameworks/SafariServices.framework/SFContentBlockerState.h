
@interface SFContentBlockerState : NSObject <NSSecureCoding> {
    bool  _enabled;
}

@property (getter=isEnabled, nonatomic) bool enabled;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(bool)arg1;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;

@end
