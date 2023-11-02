
@interface PKImageDescriptorSymbol : PKImageDescriptor {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

+ (id)createForName:(id)arg1 withTintColor:(long long)arg2;
+ (id)createForName:(id)arg1 withTintColor:(long long)arg2 hasBackground:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;

@end
