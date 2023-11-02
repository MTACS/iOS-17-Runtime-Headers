
@interface HPSSetting : NSObject <NSCopying, NSSecureCoding> {
    NSString * _keyPath;
    NSDate * _lastModifiedDate;
    <NSObject><NSCopying><NSSecureCoding> * _value;
}

@property (nonatomic, readonly) id homeAdapterLegacySettingValue;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSString *lastModifiedDescription;
@property (nonatomic, readonly, copy) <NSObject><NSCopying><NSSecureCoding> *value;

+ (id)settingWithKeyPath:(id)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;
+ (Class)valueClass;
+ (id)valueClasses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeAdapterLegacySettingValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSetting:(id)arg1;
- (bool)isEquivalentToSetting:(id)arg1;
- (id)keyPath;
- (id)lastModifiedDate;
- (id)lastModifiedDescription;
- (void)setLastModifiedDate:(id)arg1;
- (id)value;

@end
