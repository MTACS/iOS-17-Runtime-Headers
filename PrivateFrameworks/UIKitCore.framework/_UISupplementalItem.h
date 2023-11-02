
@interface _UISupplementalItem : NSObject <NSCopying, NSSecureCoding> {
    UIImage * _icon;
    id  _internal;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) UIImage *icon;
@property (getter=_identifier, nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)_uiSupplementalItemWithTISupplementalItem:(id)arg1 icon:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_identifier;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
