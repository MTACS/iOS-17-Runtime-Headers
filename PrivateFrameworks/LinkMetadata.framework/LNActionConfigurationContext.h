
@interface LNActionConfigurationContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _widgetFamily;
}

@property (nonatomic, copy) NSString *widgetFamily;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setWidgetFamily:(id)arg1;
- (id)widgetFamily;

@end
