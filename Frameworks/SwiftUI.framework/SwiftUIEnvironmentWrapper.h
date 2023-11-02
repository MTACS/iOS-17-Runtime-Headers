
@interface SwiftUIEnvironmentWrapper : NSObject <NSSecureCoding> {
    void environment;
    void focusedValues;
    void phase;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
