
@interface LNAppShortcutOptionsCollectionMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _systemImageName;
    LNStaticDeferredLocalizedString * _title;
}

@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)systemImageName;
- (id)title;

@end
