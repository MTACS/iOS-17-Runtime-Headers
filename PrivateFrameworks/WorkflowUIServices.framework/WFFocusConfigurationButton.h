
@interface WFFocusConfigurationButton : NSObject <NSSecureCoding> {
    NSString * _identifier;
    bool  _isDestructive;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isDestructive;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 isDestructive:(bool)arg3;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;

@end
