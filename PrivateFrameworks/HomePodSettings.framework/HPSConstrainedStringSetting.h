
@interface HPSConstrainedStringSetting : HPSStringSetting {
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 stringValue:(id)arg2 items:(id)arg3;
- (id)items;

@end
