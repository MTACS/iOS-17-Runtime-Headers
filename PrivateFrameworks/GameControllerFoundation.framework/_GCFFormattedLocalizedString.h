
@interface _GCFFormattedLocalizedString : GCFLocalizedString {
    NSString * __realizedString;
    GCFLocalizedString * _arg;
    GCFLocalizedString * _format;
}

+ (bool)supportsSecureCoding;

- (id)_realizedString;
- (id)bundle;
- (Class)classForCoder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(id)arg1 arg:(id)arg2;
- (id)key;
- (id)table;

@end
