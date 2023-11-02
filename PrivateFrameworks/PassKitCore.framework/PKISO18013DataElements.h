
@interface PKISO18013DataElements : NSObject <NSSecureCoding> {
    NSDictionary * _elements;
}

@property (nonatomic, readonly) NSDictionary *elements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithElements:(id)arg1;

@end
