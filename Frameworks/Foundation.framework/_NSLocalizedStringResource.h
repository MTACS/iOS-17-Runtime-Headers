
@interface _NSLocalizedStringResource : NSObject <NSCopying, NSSecureCoding> {
    _NSLocalizedStringResourceSwiftWrapper * _resource;
}

@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *defaultValue;
@property (readonly, copy) NSString *key;
@property (copy) NSLocale *locale;
@property (readonly, copy) NSString *table;

+ (bool)supportsSecureCoding;

- (id)bundleURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 locale:(id)arg4 bundleURL:(id)arg5;
- (id)initWithKey:(id)arg1 table:(id)arg2 locale:(id)arg3 bundleURL:(id)arg4;
- (id)initWithResource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)locale;
- (id)localize;
- (id)localizeWithOptions:(id)arg1;
- (id)resource;
- (void)setLocale:(id)arg1;
- (id)table;

@end
