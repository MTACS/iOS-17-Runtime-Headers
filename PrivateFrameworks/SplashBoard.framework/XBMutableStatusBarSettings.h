
@interface XBMutableStatusBarSettings : XBStatusBarSettings

@property (getter=isBackgroundActivityEnabled, nonatomic) bool backgroundActivityEnabled;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) long long style;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundActivityEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setStyle:(long long)arg1;

@end
