
@interface _NSLocalizedStringResourceSwiftWrapper : NSObject <NSCopying, NSSecureCoding> {
    void wrapped;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *defaultValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, readonly) NSString *table;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleURL;
- (id)copyWithZone:(void*)arg1;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 locale:(id)arg4 bundleURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)locale;
- (id)localize;
- (id)localizeWithOptions:(id)arg1;
- (void)setLocale:(id)arg1;
- (id)table;

@end
