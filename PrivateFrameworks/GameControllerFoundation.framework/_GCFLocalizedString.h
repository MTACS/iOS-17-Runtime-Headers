
@interface _GCFLocalizedString : GCFLocalizedString {
    NSString * __realizedString;
    NSString * _key;
    NSLocale * _localeOverride;
    NSString * _localizationTable;
    NSBundle * _sourceBundle;
}

+ (bool)supportsSecureCoding;

- (id)_realizedString;
- (id)bundle;
- (Class)classForCoder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 sourceBundle:(id)arg2 table:(id)arg3 locale:(id)arg4;
- (id)key;
- (id)table;

@end
