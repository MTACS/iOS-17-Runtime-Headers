
@interface STSiriContext : NSObject <NSSecureCoding> {
    NSArray * _modelObjects;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aceValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObjects:(id)arg1;
- (id)modelObjects;

@end
