
@interface HMDSettingSelectionItem : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSString * _title;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)title;

@end
