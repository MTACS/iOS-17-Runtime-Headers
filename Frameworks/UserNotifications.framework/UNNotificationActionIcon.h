
@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding> {
    NSString * _imageName;
    bool  _systemIcon;
}

@property (nonatomic, copy) NSString *imageName;
@property (getter=isSystemIcon, nonatomic) bool systemIcon;

+ (id)_iconWithImageName:(id)arg1 systemIcon:(bool)arg2;
+ (id)iconWithSystemImageName:(id)arg1;
+ (id)iconWithTemplateImageName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description;
- (id)_initWithImageName:(id)arg1 systemIcon:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSystemIcon;
- (void)setImageName:(id)arg1;
- (void)setSystemIcon:(bool)arg1;

@end
