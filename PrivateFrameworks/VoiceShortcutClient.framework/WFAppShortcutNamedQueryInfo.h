
@interface WFAppShortcutNamedQueryInfo : NSObject <NSSecureCoding> {
    NSString * _name;
    NSString * _symbolName;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *symbolName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 symbolName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)symbolName;

@end
