
@interface STGenericIntentGroup : NSObject <NSSecureCoding> {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
