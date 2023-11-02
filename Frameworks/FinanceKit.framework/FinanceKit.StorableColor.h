
@interface FinanceKit.StorableColor : NSObject <NSSecureCoding> {
    void alpha;
    void blue;
    void green;
    void red;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
