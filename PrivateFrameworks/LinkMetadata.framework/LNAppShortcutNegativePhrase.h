
@interface LNAppShortcutNegativePhrase : NSObject <NSSecureCoding> {
    LNStaticDeferredLocalizedString * _phrase;
}

@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *phrase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrase:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)phrase;

@end
