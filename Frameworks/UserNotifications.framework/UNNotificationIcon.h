
@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id  _iconInfo;
    long long  _iconInfoType;
    bool  _shouldSuppressMask;
}

+ (id)iconAtPath:(id)arg1;
+ (id)iconAtPath:(id)arg1 shouldSuppressMask:(bool)arg2;
+ (id)iconForApplicationIdentifier:(id)arg1;
+ (id)iconForSystemImageNamed:(id)arg1;
+ (id)iconNamed:(id)arg1;
+ (id)iconNamed:(id)arg1 shouldSuppressMask:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIconInfo:(id)arg1 type:(long long)arg2 shouldSuppressMask:(bool)arg3;
- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)path;
- (bool)shouldSuppressMask;
- (id)systemImageName;

@end
