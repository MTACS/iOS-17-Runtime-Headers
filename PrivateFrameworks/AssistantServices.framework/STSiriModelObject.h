
@interface STSiriModelObject : NSObject <NSSecureCoding> {
    NSString * _identifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
