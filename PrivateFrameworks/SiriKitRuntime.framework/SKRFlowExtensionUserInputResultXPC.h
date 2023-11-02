
@interface SKRFlowExtensionUserInputResultXPC : NSObject <NSSecureCoding> {
    void error;
    void exclude;
    void reformedInputData;
    void type;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
