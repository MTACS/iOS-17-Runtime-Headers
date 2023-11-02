
@interface SBSRemoteContentAlertAction : NSObject <NSSecureCoding> {
    bool  _enabled;
    long long  _style;
    NSString * _title;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (long long)style;
- (id)title;

@end
