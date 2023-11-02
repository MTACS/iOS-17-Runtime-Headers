
@interface SKRExecutionOutputAtom : NSObject <NSSecureCoding> {
    void command;
    void contextUpdate;
    void type;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
