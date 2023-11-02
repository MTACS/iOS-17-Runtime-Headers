
@interface HPSConstrainedSiriLanguageSetting : HPSSiriLanguageSetting {
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 items:(id)arg2;
- (id)initWithKeyPath:(id)arg1 languageValue:(id)arg2 items:(id)arg3;
- (id)items;

@end
