
@interface AMSExpressCheckoutResultModel : NSObject <NSSecureCoding> {
    void path;
    void selection;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
