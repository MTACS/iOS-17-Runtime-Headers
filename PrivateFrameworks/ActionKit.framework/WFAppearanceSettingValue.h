
@interface WFAppearanceSettingValue : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    long long  _setting;
}

@property (nonatomic, readonly) long long setting;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetting:(long long)arg1;
- (bool)isDarkModeOn;
- (long long)setting;
- (id)valueByInvertingSetting;
- (id)wfName;

@end
