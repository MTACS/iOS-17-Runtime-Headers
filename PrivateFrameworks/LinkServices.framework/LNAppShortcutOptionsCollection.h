
@interface LNAppShortcutOptionsCollection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizedTitle;
    LNAppShortcutDynamicOptionsProviderReference * _optionsProviderReference;
    NSString * _systemImageName;
}

@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) LNAppShortcutDynamicOptionsProviderReference *optionsProviderReference;
@property (nonatomic, readonly, copy) NSString *systemImageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 systemImageName:(id)arg2 optionsProviderReference:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (id)optionsProviderReference;
- (id)systemImageName;

@end
