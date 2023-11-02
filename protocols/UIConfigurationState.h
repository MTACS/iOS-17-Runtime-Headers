
@protocol UIConfigurationState <NSObject, NSCopying, NSSecureCoding>

@required

- (id)customStateForKey:(NSString *)arg1;
- (id)initWithTraitCollection:(UITraitCollection *)arg1;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (void)setCustomState:(id)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(NSString *)arg2;
- (void)setTraitCollection:(UITraitCollection *)arg1;
- (UITraitCollection *)traitCollection;

@end
