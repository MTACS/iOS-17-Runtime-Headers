
@interface TUIDictationAccessory : TUICursorAccessory <NSSecureCoding> {
    NSArray * _languages;
}

@property (nonatomic, retain) NSArray *languages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalComponents;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguages:(id)arg1 actionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (id)languages;
- (void)setLanguages:(id)arg1;

@end
